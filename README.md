# kaitai_awkward_runtime

# awkward-kaitai
Building Awkward Arrays using Kaitai binary file descriptors.

Steps for reproducing the environment:

1. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```

2. Run CMake
```
cmake -B build
```

3. Install the library
```
pip install .
```

4. Print the returned `ak.Array`
```python
from awkward_kaitai import create_awkward_array
print(create_awkward_array())
```