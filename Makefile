.PHONY: list test all clean

# Remove --debug to strip debugging symbols from the library
BUILD = local/bin/awkward-kaitai-build --debug
JAVA_CLASSES = kaitai_struct_compiler/jvm/target/scala-2.12/classes/io/kaitai/struct

# This path only works on Linux, need to make it compatible with WSL as well
# These are the jars that are needed to run the compiler we will be building
# They are installed by the kaitai-struct-compiler package
JAR_PATH = /usr/share/kaitai-struct-compiler/lib/*

KSY := animal fake index_option numpy pixie4e records scdms hello_world scdms_v8 simple_enum

LIBS := $(foreach ksy,$(KSY),test_artifacts/lib$(ksy).so)

compile_test: # define testcase environment variable
	rm -f test_artifacts/lib$(testcase).so
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) test_artifacts/$(testcase).cpp -b build
	pytest tests/test_$(testcase).py

cpp: $(foreach ksy,$(KSY),test_artifacts/$(ksy).cpp)

# not used currently, here for later reference
#inject_layoutbuilder:
#	# use a newer LayoutBuilder.h
#	# we need to trigger the compiler to prepare all the build files
#	# and then overwrite the header
#	PYTHONPATH=$$PYTHONPATH:local $(BUILD) test_artifacts/animal.cpp -b build
#	wget -O build/build/_deps/awkward-headers-src/layout-builder/awkward/LayoutBuilder.h https://github.com/scikit-hep/awkward/raw/fix_max_index_init/header-only/layout-builder/awkward/LayoutBuilder.h


# 1) Build the KSY->C++ compiler kaitai_struct_compiler
$(JAVA_CLASSES): kaitai_struct_compiler/shared/src/main/scala/io/kaitai/struct/languages/AwkwardCompiler.scala
	cd kaitai_struct_compiler && sbt package

# 2) Generate C++ files from the KSY files
test_artifacts/%.cpp: example_data/schemas/%.ksy $(JAVA_CLASSES)
	java -cp kaitai_struct_compiler/jvm/target/scala-2.12/kaitai-struct-compiler_2.12-0.11-SNAPSHOT.jar:$(JAR_PATH) io.kaitai.struct.JavaMain -t awkward --outdir test_artifacts $<

# 3) Build the Python runtime for the C++ shared libraries
$(BUILD): kaitai_struct_compiler/shared/src/main/scala/io/kaitai/struct/languages/AwkwardCompiler.scala
	pip install . -t local

# 4) Compile the generated C++ files into shared libraries
test_artifacts/lib%.so: test_artifacts/%.cpp $(BUILD)
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) $< -b build

# 5) Run all the Python tests
test: $(LIBS)
	pytest

list:
	@LC_ALL=C $(MAKE) -pRrq -f $(firstword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/(^|\n)# Files(\n|$$)/,/(^|\n)# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' | sort | grep -E -v -e '^[^[:alnum:]]' -e '^$@$$'

clean:
	rm -rf local build test_artifacts && cd kaitai_struct_compiler && rm -fr js/target/ jvm/target/ project/project/ project/target/ target/ .bsp/
