BUILD = local/bin/awkward-kaitai-build
JAVA_CLASSES = kaitai_struct_compiler/jvm/target/scala-2.12/classes/io/kaitai/struct

all: src-animal/libanimal.so

src-animal/libanimal.so: src-animal/animal.cpp $(BUILD)
	local/bin/awkward-kaitai-build src-animal/animal.cpp -b build

src-animal/animal.cpp: $(JAVA_CLASSES)
	./kaitai-struct-compiler -t awkward --outdir src-animal example_data/schemas/animal.ksy

$(BUILD):
	pip install . -t local

$(JAVA_CLASSES):
	cd kaitai_struct_compiler && sbt package

test: src-animal/libanimal.so
	pytest

clean:
	rm -rf local src-animal && cd kaitai_struct_compiler && rm -fr js/target/ jvm/target/ project/project/ project/target/
