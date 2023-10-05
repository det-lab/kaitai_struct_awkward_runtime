# kaitai_awkward_runtime

# awkward-kaitai
Building Awkward Arrays using Kaitai binary file descriptors.

Steps for reproducing the environment:

1. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```

2. Change directory to `kaitai_awkward_runtime` and run CMake:
```
cd kaitai_awkward_runtime
export CMAKE_ARGS="-DKSY=schemas/animal.ksy -DBUILD_SHARED_LIBS=OFF -DBUILD_STATIC_LIBS=ON"
```
<!--- if we want to set up the package_name as ksy name we can just skip the PACKAGE_NAME argument -->

3. Install the library and open Python:
```
pip install .
python
```

4. Print the returned `ak.Array`:
```python
import animal
awkward_array = animal.load("../data/animal.raw")
print(awkward_array)
```

