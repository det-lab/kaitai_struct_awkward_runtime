# Katai struct awkward runtime

This is a runtime for the [Kaitai Struct](https://kaitai.io/) compiler that generates code for the [Awkward Array](https://awkward-array.org/) library.

Kaitai Struct is a declarative language used to describe binary data structures, and the Kaitai Struct compiler generates code in various languages to parse these structures. This project generates C++ code which reads the input data into Awkward Arrays, leveraging the flexibility and performance of the Awkward Array library.

## Installation

This installation procedure if for users only, see below for development instructions.

This has been currently tested only on Ubuntu.

### Install the Kaitai compiler

See the [Kaitai docs](https://kaitai.io/#download), at the moment:

```bash
curl -LO https://github.com/kaitai-io/kaitai_struct_compiler/releases/download/0.10/kaitai-struct-compiler_0.10_all.deb
sudo apt-get install ./kaitai-struct-compiler_0.10_all.deb
```

This will install Java if not already installed.

### Install the custom version of the compiler

On Github, go to the [releases page](https://github.com/det-lab/kaitai_struct_awkward_runtime/releases), download the latest `jar` file and overwrite the official Kaitai compiler:

    sudo cp io.kaitai.kaitai-struct-compiler-0.10.jar /usr/share/kaitai-struct-compiler/lib/io.kaitai.kaitai-struct-compiler-0.10.jar

You can restore the original compiler by reinstalling the official package:
```bash
sudo apt-get install --reinstall ./kaitai-struct-compiler_0.10_all.deb
```

### Install the runtime

```bash
pip install awkward-kaitai
```

## Usage

First we need a test schema and a test file, for example we can take `animal.ksy` and `animal.raw` from the [Kaitai Awkward Struct examples](https://github.com/det-lab/kaitai_struct_awkward_runtime/tree/main/example_data)

```bash
wget https://github.com/det-lab/kaitai_struct_awkward_runtime/raw/refs/heads/main/example_data/schemas/animal.ksy
wget https://github.com/det-lab/kaitai_struct_awkward_runtime/raw/refs/heads/main/example_data/data/animal.raw
```

Then we first compile the schema into C++ sources:

```bash
ksc -t awkward animal.ksy
```

This will generate a `animal.cpp` file that we can compile into a shared library:

```bash
awkward-kaitai-build -b build animal.cpp
```

This will generate a `libanimal.so` file that we can use to read the data:

```python
import awkward_kaitai
from pprint import pprint

animal = awkward_kaitai.Reader("./libanimal.so")
awkward_array = animal.load("animal.raw")

pprint(awkward_array.to_list())
```

This will print the content of the `animal.raw` file:

```json
[{'animalA__Zentry': [{'animal_entryA__Zage': 5,
                       'animal_entryA__Zspecies': 'cat',
                       'animal_entryA__Zstr_len': 3,
                       'animal_entryA__Zweight': 12},
                      {'animal_entryA__Zage': 3,
                       'animal_entryA__Zspecies': 'dog',
                       'animal_entryA__Zstr_len': 3,
                       'animal_entryA__Zweight': 43},
                      {'animal_entryA__Zage': 10,
                       'animal_entryA__Zspecies': 'turtle',
                       'animal_entryA__Zstr_len': 6,
                       'animal_entryA__Zweight': 5}]}]
```

## Development

* [Setup a development environment](./development.md)
* [Release a new version](./release.md)

## Related Papers and Talks
1. [Describe Data to get Science-Data-Ready Tooling: Awkward as a Target for Kaitai Struct YAML](https://indico.cern.ch/event/1330797/contributions/5796564/), Advanced Computing and Analysis Techniques for Physics Research Workshop 2024, New York, US.
2. [Awkward Target for Kaitai Struct](https://indico.cern.ch/event/1252095/contributions/5592420/), PyHEP Users Workshop 2023.