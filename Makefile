.PHONY: test clean all

all: src-animal/libanimal.so

src-animal/libanimal.so: src-animal/animal.cpp local/bin/awkward-kaitai-build
	local/bin/awkward-kaitai-build src-animal/animal.cpp -b build

src-animal/animal.cpp: 
	./kaitai-struct-compiler -t awkward --outdir src-animal example_data/schemas/animal.ksy

local/bin/awkward-kaitai-build:
	pip install . -t local

test: src-animal/libanimal.so
	pytest

clean:
	rm -rf local src-animal 
