.PHONY: list test all clean

BUILD = local/bin/awkward-kaitai-build
JAVA_CLASSES = kaitai_struct_compiler/jvm/target/scala-2.12/classes/io/kaitai/struct
ifneq (,$(wildcard /proc/sys/fs/binfmt_misc/WSLInterop))
  JAR_PATH = wsl.localhost\Ubuntu\usr\share\kaitai-struct-compiler\lib\*
else
  JAR_PATH = /usr/share/kaitai-struct-compiler/lib/*
endif
KSY := animal fake index_option numpy pixie4e records
LIBS := $(foreach ksy,$(KSY),test_artifacts/lib$(ksy).so)

test_artifacts/lib%.so: test_artifacts/%.cpp $(BUILD)
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) $< -b build

$(BUILD):
	pip install . -t local

test_artifacts/%.cpp: example_data/schemas/%.ksy $(JAVA_CLASSES)
	java -cp kaitai_struct_compiler/jvm/target/scala-2.12/kaitai-struct-compiler_2.12-0.11-SNAPSHOT.jar:$(JAR_PATH) io.kaitai.struct.JavaMain -t awkward --outdir test_artifacts $<

$(JAVA_CLASSES):
	cd kaitai_struct_compiler && sbt package

test: $(LIBS)
	pytest

list:
	@LC_ALL=C $(MAKE) -pRrq -f $(lastword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/^# File/,/^# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' | sort | egrep -v -e '^[^[:alnum:]]' -e '^$@$$'

clean:
	rm -rf local test_artifacts && cd kaitai_struct_compiler && rm -fr js/target/ jvm/target/ project/project/ project/target/ target/ .bsp/
