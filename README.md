# kaitai_awkward_runtime

# awkward-kaitai
Building Awkward Arrays using Kaitai binary file descriptors.

Steps for reproducing the environment:

1. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```

2. Change to `kaitai_struct_compiler` directory: 
```
cd awkward_kaitai_tests\kaitai_struct_compiler
sbt package
cd ..
```

3. Convert the KSY specs into C++ code in the awkward_kaitai_tests repository: 
Note, make sure it is executable, first:
```
chmod +x kaitai-struct-compiler
```
```
./kaitai-struct-compiler -t awkward --outdir src-animal schemas/animal.ksy
```

4. Then compile it: 
```
g++ -DKS_STR_ENCODING_NONE -Ikaitai_struct_cpp_runtime -I. kaitai_struct_cpp_runtime/kaitai/kaitaistream.cpp src-animal/animal.cpp test-animal.cpp -o test-animal
```

5. Run: 
```
./test-animal
```

