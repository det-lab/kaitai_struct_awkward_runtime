# Kaitai Struct: runtime library for Awkward

This library building Awkward Arrays using Kaitai Struct API for Awkward using C++/STL.

## Steps

### 1. Write a .ksy file for your custom file format. Refer to the [Kaitai User Guide](https://doc.kaitai.io/user_guide.html) for more details.
Here, we take an example of `animal.ksy`
```yaml
meta:
  id: animal
  endian: le
  license: CC0-1.0
  ks-version: 0.8

seq:

  - id: entry
    type: animal_entry
    repeat: eos

types:

  animal_entry:
    seq:
      - id: str_len
        type: u1

      - id: species
        type: str
        size: str_len
        encoding: UTF-8

      - id: age
        type: u1

      - id: weight
        type: u2
```

### 2. Get `kaitai-struct-compiler` from source.

### 3. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```
```
cd kaitai_awkward_runtime
```

### 4. Generate the source and header files for Awkward target
```
kaitai-struct-compiler -t awkward --outdir src-animal example_data/schemas/animal.ksy
```

### 5. Install the library, and open Python:
```
pip install
python
```

### 6. Print the returned `ak.Array`:
```python
import awkward_kaitai
animal = awkward_kaitai.Reader("./libanimal.so")
awkward_array =  animal.load("example_data/data/animal.raw")
print(ak.to_list(awkward_array))
```

#### Output
```
[{'entry': [{'str_len': 3, 'species': 'cat', 'age': 5, 'weight': 12}]}, {'entry': [{'str_len': 3, 'species': 'dog', 'age': 3, 'weight': 43}]}, {'entry': [{'str_len': 6, 'species': 'turtle', 'age': 10, 'weight': 5}]}]
```