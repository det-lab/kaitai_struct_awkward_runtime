# Kaitai Struct: Awkward Array runtime

This project bridges Kaitai Struct schemas to Awkward Arrays. It provides a C++
runtime plus Python helpers so Kaitai-generated parsers can emit Awkward Array
buffers directly.

## Quickstart

1) Generate C++ from a `.ksy` schema using the Kaitai compiler with the Awkward target.
2) Build a shared library from the generated `.cpp`.
3) Load binary data into an Awkward Array.

Example flow:

```bash
# From a schema (requires kaitai-struct-compiler with awkward target)
java -cp <classpath> io.kaitai.struct.JavaMain -t awkward --outdir test_artifacts example_data/schemas/hello_world.ksy

# Build a shared library from the generated C++ file
awkward-kaitai-build test_artifacts/hello_world.cpp -b build
```

```python
from awkward_kaitai import Reader

reader = Reader("test_artifacts/libhello_world.so")
array = reader.load("example_data/data/hello_world.bin")
print(array)
```

## Documentation

The documentation is available at <https://det-lab.github.io/kaitai_struct_awkward_runtime/>.

### Example schemas

`example_data/schemas/ramses_amr.ksy` and `example_data/schemas/ramses_rt.ksy`
are real-world examples (RAMSES AMR and radiative-transfer output) that exercise
several Awkward-target features: switches whose case is an empty type (handled
as a per-element `None` option), switches over primitive types, `_raw_`
byte-buffer reads, and deeply nested lists of records/options. With the current
`kaitai_struct_compiler` fork they generate, build, and read correctly. See
`docs/ramses_amr.md` and `docs/ramses_rt.md` for the verified output and the
codegen fixes they require.

## Requirements

- Kaitai Struct compiler **0.11+** with the `awkward` target.
- CMake and a C++ toolchain for building shared libraries.

## Development

- Build and test everything: `make test`
- Fast loop for a single schema: `make compile_test testcase=hello_world`
- Linting and checks: `nox -s lint` / `nox -s pylint` / `nox -s tests`
- Submodule setup: `git submodule update --init --recursive`

See `AGENTS.md` for detailed contributor guidance.

## Related Papers and Talks
1. [Describe Data to get Science-Data-Ready Tooling: Awkward as a Target for Kaitai Struct YAML](https://indico.cern.ch/event/1330797/contributions/5796564/), Advanced Computing and Analysis Techniques for Physics Research Workshop 2024, New York, US.
2. [Awkward Target for Kaitai Struct](https://indico.cern.ch/event/1252095/contributions/5592420/), PyHEP Users Workshop 2023.
