.PHONY: list test all clean cpp compile_test regen_cpp

# Remove --debug to strip debugging symbols from the library
BUILD = local/bin/awkward-kaitai-build --debug
JAVA_CLASSES = kaitai_struct_compiler/jvm/target/scala-2.12/classes/io/kaitai/struct
CLASSPATH_FILE = kaitai_struct_compiler/jvm/target/scala-2.12/classpath.txt
SBT := sbt --batch --no-colors
SBT_CMD := cd kaitai_struct_compiler && $(SBT)
KSC_SOURCES := $(shell find kaitai_struct_compiler -path '*/target' -prune -o -type f '(' -name '*.scala' -o -name '*.sbt' -o -name '*.properties' ')' -print)
PY_SRCS := $(shell find src -type f '(' -name '*.py' -o -name 'py.typed' ')')
DATA_SRCS := $(shell find src/awkward_kaitai/data -type f)
BUILD_STAMP := local/.awkward_kaitai_installed
KSC_STAMP := kaitai_struct_compiler/.sbt_package_stamp

# This path only works on Linux, need to make it compatible with WSL as well
# These are the jars that are needed to run the compiler we will be building
# They are installed by the kaitai-struct-compiler package

KSY := animal fake index_option numpy pixie4e records scdms hello_world scdms_v8 simple_enum

LIBS := $(foreach ksy,$(KSY),test_artifacts/lib$(ksy).so)

compile_test: $(BUILD_STAMP) # define testcase environment variable
	rm -f test_artifacts/lib$(testcase).so
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) test_artifacts/$(testcase).cpp -b build
	pytest tests/test_$(testcase).py

cpp: $(foreach ksy,$(KSY),test_artifacts/$(ksy).cpp)

regen_cpp: cpp

# not used currently, here for later reference
#inject_layoutbuilder:
#	# use a newer LayoutBuilder.h
#	# we need to trigger the compiler to prepare all the build files
#	# and then overwrite the header
#	PYTHONPATH=$$PYTHONPATH:local $(BUILD) test_artifacts/animal.cpp -b build
#	wget -O build/build/_deps/awkward-headers-src/layout-builder/awkward/LayoutBuilder.h https://github.com/scikit-hep/awkward/raw/fix_max_index_init/header-only/layout-builder/awkward/LayoutBuilder.h


# 1) Build the KSY->C++ compiler kaitai_struct_compiler
$(KSC_STAMP): $(KSC_SOURCES)
	$(SBT_CMD) package
	touch $@

$(JAVA_CLASSES): $(KSC_STAMP)

$(CLASSPATH_FILE): $(JAVA_CLASSES)
	mkdir -p $(dir $(CLASSPATH_FILE))
	$(SBT_CMD) --error "export compilerJVM/Compile/fullClasspath" | tail -n 1 > ../$(CLASSPATH_FILE)

# 2) Generate C++ files from the KSY files
test_artifacts/%.cpp: example_data/schemas/%.ksy $(JAVA_CLASSES) $(CLASSPATH_FILE)
	java -cp "$$(cat $(CLASSPATH_FILE))" io.kaitai.struct.JavaMain -t awkward --outdir test_artifacts $<

# 3) Build the Python runtime for the C++ shared libraries
$(BUILD_STAMP): pyproject.toml $(PY_SRCS) $(DATA_SRCS)
	PYTHONPATH=local:$$PYTHONPATH pip install --upgrade --disable-pip-version-check . -t local
	touch $@

# 4) Compile the generated C++ files into shared libraries
test_artifacts/lib%.so: test_artifacts/%.cpp $(BUILD_STAMP)
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) $< -b build

# 5) Run all the Python tests
test: $(LIBS)
	pytest

list:
	@LC_ALL=C $(MAKE) -pRrq -f $(firstword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/(^|\n)# Files(\n|$$)/,/(^|\n)# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' | sort | grep -E -v -e '^[^[:alnum:]]' -e '^$@$$'

clean:
	rm -rf local build test_artifacts
	(cd kaitai_struct_compiler && rm -rf js/target/ jvm/target/ project/project/ project/target/ target/ .bsp/)
