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

## Debug in C++

Errors appearing in Python are more difficult to debug due to the additional Python layer. It is often better to create a test case directly in C++.

We assume you are using VS Code and have installed the C++ extension.

In particular, you can use `tests/debug_tests.cpp`. First, ensure the library to read your target file is already compiled. You can then configure the test to read a file and parse it.

The simplest way is to use the functionality already provided in the Makefile.

Place the test KSY and test file in the folders expected by the Makefile:

    example_data/schemas/TEST.ksy
    example_data/data/TEST.xxx

Open `.vscode/tasks.json` and modify the task to link:

    "${workspaceFolder}/test_artifacts/TEST.cpp",

At this point, you can click on the "C/C++: build & debug debug_tests.cpp" debug configuration profile in the debug tab of VS Code, and it will compile the test file and run it.

For C++ debugging, we assume you already have a reference `TEST.cpp` file created. See the next section for details.

## Debug in Scala

The Awkward Compiler is implemented in Scala and creates a Java library that generates the `TEST.cpp` source file given an input KSY file.

Install the Scala (Metals) extension for VS Code.

Execute the "Run Scala compiler" task in the debug tab of VS Code. This will compile the Scala code and create the `TEST.cpp` file.

You can set breakpoints in the Scala code, and when you run the task, it will stop at those breakpoints. You can then inspect the variables and see what is happening in the Scala code.
