BUILD = local/bin/awkward-kaitai-build
JAVA_CLASSES = kaitai_struct_compiler/jvm/target/scala-2.12/classes/io/kaitai/struct
COMPILER = kaitai_struct_compiler/jvm/target/universal/scripts/bin/kaitai-struct-compiler

all: src-animal/libanimal.so

src-animal/libanimal.so: $(BUILD) src-animal/animal.cpp
	PYTHONPATH=$$PYTHONPATH:local $(BUILD) src-animal/animal.cpp -b build

$(BUILD):
	pip install . -t local

src-animal/animal.cpp: $(JAVA_CLASSES) $(COMPILER)
	$(COMPILER) -t awkward --outdir src-animal example_data/schemas/animal.ksy

$(JAVA_CLASSES):
	cd kaitai_struct_compiler && sbt package

$(COMPILER):
	cd kaitai_struct_compiler && sbt compilerJVM/universal:packageBin

test: src-animal/libanimal.so
	pytest

clean:
	rm -rf local src-animal && cd kaitai_struct_compiler && rm -fr js/target/ jvm/target/ project/project/ project/target/
