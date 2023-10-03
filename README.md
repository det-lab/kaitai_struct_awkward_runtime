# kaitai_awkward_runtime

# awkward-kaitai
Building Awkward Arrays using Kaitai binary file descriptors.

Steps for reproducing the environment:

1. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```

2. Change directory to `kaitai_awkward_runtime` and run Cmake
```
cd kaitai_awkward_runtime
cmake -B build -DKSY=schemas/animal.ksy -DPACKAGE_NAME=awkward_animal
```

3. Install the library
```
pip install .
```

4. Print the returned `ak.Array`
```python
from awkward_animal import load
print(create_awkward_array("../data/animal.raw"))
```

