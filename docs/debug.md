# Debugging and Developing Awkward-Kaitai

To effectively debug or develop Awkward-Kaitai, it's important to understand the project's structure and workflow.

The core logic resides in:

```
./kaitai_struct_awkward_runtime/kaitai_struct_compiler/shared/src/main/scala/io/kaitai/struct/languages/AwkwardCompiler.scala
```

This Scala file implements the Awkward backend for Kaitai. It is compiled as part of the `ksc` compiler into a Java library. Its primary role is to take a `.ksy` Kaitai schema file and generate C++ source code capable of parsing files described by that schema.

After generating the C++ sources, use the `awkward-kaitai-build` tool (provided in `kaitai_struct_awkward_runtime`) to build them into a shared library.

Once the shared library is built, it can be imported and used as a Python library.

Refer to the `Makefile` in the repository root for step-by-step build and execution instructions.

For debugging, it's often more effective to work directly with the generated C++ code to diagnose runtime issues. Once the problem is identified and resolved in C++, update the Scala source to ensure correct C++ code generation.

Configuring an IDE such as VS Code for both C++ and Scala development can streamline interactive debugging and development.

## Debug the C++ extension

Errors appearing in Python are more difficult to debug due to having to worry also about the python layer,
it is better instead to create a test case directly in cpp.

In particluar we can use `tests/debug_tests.cpp`, we need first to have the library to read our target file already compiled,
we can then configure it to read a test file and parse it.