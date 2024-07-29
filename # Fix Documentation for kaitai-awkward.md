# Fix Documentation for kaitai-awkward

* **Project:** kaitai-awkward
* **Component:** Scala compiler generating C++ source code from .ksy files
* **Reported by:** [Adrian Fisher]

## Issue Description

### Background
kaitai-struct-compiler was being used to generate a C++ source code from a .ksy file. The .ksy file described basic example data which contained shortPairs and longPairs of key/value data. The data contains pairs of "key"s and "value"s, both encoded in ASCII. The keys are either a size 3 shortPair or size 8 longPair, and "value"s increment from 0 to 255. 

So shortPairs take the form:
keyvalue0 keyvalue1 keyvalue2

And longPairs take the form:
key0    value0 key1    value1 key2    value2

### Problem
The variables for the key length and a "_recordbuilder" were swapped in the source code, causing the compiler to fail when building awkward-kaitai with the generated .cpp file.

## Steps to Reproduce

1. Clone the dataReaderWriter repository:
    git clone https://github.com/det-lab/dataReaderWriter.git
    The relevent .ksy file is located at dataReaderWriter/kaitai/ksy/parametric_parser.ksy

2. Clone kaitai_struct_awkward_runtime repository:
    git clone --recursive https://github.com/det-lab/kaitai_struct_awkward_runtime.git
    cd kaitai_struct_awkward_runtime
    git checkout ManasviGoyal/test

3. Update submodule and compile scala code:
    git submodule update --init
    cd kaitai_struct_compiler
    sbt package
    cd ../
    chmod u+x kaitai-struct-compiler

4. Generate the source and header files for Awkward target:
    ./kaitai-struct-compiler -t awkward --outdir src-parametric path/to/dataReaderWriter/kaitai/ksy/parametric_parser.ksy
    This should generate a folder named "src-parametric" with the files "kv_pairs.cpp" and "kv_pairs.h"

5. Install the library:
    pip install awkward-kaitai

6. Build awkward kaitai by passing the path of the main .cpp from the generated code:
    awkward-kaitai-build src-parametric/kv_pairs.cpp -b build

    If python gives a warning about the installation not being on the path, in order to get the file to build you may need to run:
        echo "export PATH=$PATH:/path/python/says" >> ~/.bashrc

    This should generate:
    error: no matching function for call to ‘kv_pairs_t::kv_pair_t::kv_pair_t(awkward::LayoutBuilder::Record<std::map<long unsigned int, std::__cxx11::basic_string<char> >, awkward::LayoutBuilder::Field<0, awkward::LayoutBuilder::ListOffset<long int, awkward::LayoutBuilder::Numpy<unsigned char> > >, awkward::LayoutBuilder::Field<1, awkward::LayoutBuilder::ListOffset<long int, awkward::LayoutBuilder::Numpy<unsigned char> > > >&, int, kaitai::kstream*&, kv_pairs_t*, kv_pairs_t*&)
    and:
    error: no matching function for call to ‘kv_pairs_t::kv_pair_t::kv_pair_t(awkward::LayoutBuilder::Record<std::map<long unsigned int, std::__cxx11::basic_string<char> >, awkward::LayoutBuilder::Field<0, awkward::LayoutBuilder::ListOffset<long int, awkward::LayoutBuilder::Numpy<unsigned char> > >, awkward::LayoutBuilder::Field<1, awkward::LayoutBuilder::ListOffset<long int, awkward::LayoutBuilder::Numpy<unsigned char> > > >&, int, kaitai::kstream*&, kv_pairs_t*, kv_pairs_t*&)’

    The errors should be pointing to lines 36 and 45 respectively in kv_pairs.cpp

## Steps taken to solve:

1. **Identifying the Source of the Issue:**
    Utilized grep search to find the parts of the compiler code which corresponded with the .cpp error location.
        grep -r "const int"
            This search gave fewer results than other keywords. One of the results was:
            kaitai_struct_compiler/shared/src/main/scala/io/kaitai/struct/languages/AwkwardCompiler.scala:    outSrc.puts(s"const int $lenVar = ${expression(repeatExpr)};")
            line 959

        The code for condRepeatExprHeader generates the code of kv_pairs.cpp from lines 31-34, and 40-43.
        This lead me to condRepeatExprFooter, which generates the lines 37-38, and 46-47

        Doing a grep search for condRepeatExprHeader lead to the file CommonReads.scala, line 72. This is part of a match-case in the function attrParse0 which uses the function attrParse2 after the match-case section.

        Doing another search for "def attrParse2" leads to lines 688-772 AwkwardCompiler which generates lines 35 and 44 of the .cpp file with lines 702-709.

        Line 704 had an instance of the key term "_recordbuilder," which appears only in lines 35, 36, 44, and 45 of the .cpp file, so after this I did a search of the term, leading me to the only other instance of it's useage at line 1070 of AwkwardCompiler.scala:
            val addParams = s"${t.name.head}_recordbuilder, " + Utils.join(t.args.map((a) => translator.translate(a)), "", ", ", ", ")
        
        This line was then edited to swap the positions of the two arguments:
            val addParams = Utils.join(t.args.map((a) => translator.translate(a)), "", ", ", ", ") + s"${t.name.head}_recordbuilder,"

2. **Save and recompile**
    After saving the file, from the terminal:
        cd kaitai_struct_compiler
        sbt package
        cd ../
        chmod u+x kaitai-struct-compiler
    These steps were taken after each change made to the compiler file in order to confirm locations of changes in .cpp file.

3. **Regenerate the source and header file.**
    ./kaitai-struct-compiler -t awkward --outdir src-parametric_test path/to/dataReaderWriter/kaitai/ksy/parametric_parser.ksy
    You should no longer have to pip install awkward-kaitai

4. **Rebuild awkward kaitai by passing the path of the newly generated files.**
    awkward-kaitai-build src-parametric/kv_pairs.cpp -b build

    This should now run successfully. 