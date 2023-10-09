# kaitai_awkward_runtime

Building Awkward Arrays using Kaitai binary file descriptors.

Steps for reproducing the environment:

1. Clone `kaitai_awkward_runtime` repository:
```
git clone --recursive https://github.com/ManasviGoyal/kaitai_awkward_runtime.git
```

2. Change directory to `kaitai_awkward_runtime`:
```
cd kaitai_awkward_runtime
```
<!--- if we want to set up the package_name as ksy name we can just skip the PACKAGE_NAME argument -->

3. Install the library, and open Python:
```
pip install .    
python
```

4. Print the returned `ak.Array`:
```python
import awkward_animal
awkward_array = awkward_animal.load("data/animal.raw")
print(awkward_array)
```


> **Info**
> `kaitai_awkward_runtime` depends upon `sbt`, and `gtest` dependencies.
