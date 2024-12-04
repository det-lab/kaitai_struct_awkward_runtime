# How to release the packages

## Python package

The Python package is released to PyPI:

<https://pypi.org/project/awkward-kaitai/>

To release a new version, tag it in the repository and push the tag:

```bash
git tag -a 0.x.0 -m "Release 0.x.0"
git push origin 0.x.0
```

Then, create a new release on Github with the same tag and generate the release notes.

Make sure the repository is clean and the submodule has no extra changes:

```bash
git submodule update
```

Then, run the following commands to check the version:

```bash
pip install hatch
VERSION=$(hatch version)
echo $VERSION
```

And finally, release the package:

```bash
hatch release
```

if `hatch` complaints about `keyring` not working, disable it:

```bash
PYTHON_KEYRING_BACKEND=keyring.backends.null.Keyring
```

## Jar file of the compiler

The jar file of `kaitai-struct-compiler` with Awkward support is built by:

```bash
cd kaitai_struct_compiler
sbt package
```

Is located at:

```bash
ls jvm/target/scala-*/kaitai-struct-compiler*.jar
```

It can be attached to the release on Github using [`gh`](https://cli.github.com/) with:

```bash
mv jvm/target/scala-*/kaitai-struct-compiler*.jar io.kaitai.kaitai-struct-compiler-0.10.jar
gh release upload $VERSION io.kaitai.kaitai-struct-compiler-0.10.jar
```