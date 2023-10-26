from __future__ import annotations

import argparse
import contextlib
import os
import pathlib
import subprocess
import tempfile
import shutil
import importlib.metadata
import importlib_resources
import kaitai_awkward.data


def find_package_record_path() -> pathlib.Path:
    return next(
        p for p in importlib.metadata.files("kaitai_awkward") if p.name == "RECORD"
    ).locate()


def find_cmake() -> Iterator[pathlib.Path]:
    with contextlib.suppress(ImportError):
        from cmake import CMAKE_BIN_DIR

        yield pathlib.Path(CMAKE_BIN_DIR) / "cmake"

    for candidate in "cmake3", "cmake":
        cmake_path = shutil.which(candidate)
        if cmake_path is not None:
            yield pathlib.Path(cmake_path)


def copy_file_with_stat(src: pathlib.Path, dst: pathlib.Path, stat_src: pathlib.Path):
    shutil.copy(src, dst)
    shutil.copystat(stat_src, dst)


def get_awkward_version() -> str:
    return f"v{importlib.metadata.version('awkward')}"


def build_with_cmake(
    main_path: pathlib.Path,
    dest_path: pathlib.Path,
    configure_path: pathlib.Path | None,
):
    try:
        cmake_path = next(find_cmake())
    except StopIteration:
        raise RuntimeError("Could not find CMake binary")

    # Copy various CMake files into correct positions
    build_context = (
        tempfile.TemporaryDirectory()
        if configure_path is None
        else contextlib.nullcontext(configure_path)
    )
    with build_context as _temp_path:
        temp_path = pathlib.Path(_temp_path)
        temp_path.mkdir(exist_ok=True)

        files_path = importlib_resources.files(kaitai_awkward.data)
        record_path = find_package_record_path()

        # Load resources from the Python package
        with importlib_resources.as_file(
            files_path / "CMakeLists.txt"
        ) as cmakelists_path, importlib_resources.as_file(
            files_path / "kaitai_struct_cpp_stl_runtime-CMakeLists.txt"
        ) as kaitai_struct_cmakelists_path:
            # Copy resources to new temporary directory
            copy_file_with_stat(
                cmakelists_path, temp_path / "CMakeLists.txt", record_path
            )

            # Copy Katai Struct's CMakeLists.txt
            kaitai_struct_path = temp_path / "kaitai_struct_cpp_stl_runtime"
            kaitai_struct_path.mkdir(exist_ok=True)
            copy_file_with_stat(
                kaitai_struct_cmakelists_path,
                kaitai_struct_path / "CMakeLists.txt",
                record_path,
            )

        # Prepare build
        build_path = temp_path / "build"

        # Configure CMake
        subprocess.run(
            [
                cmake_path,
                "-S",
                str(temp_path),
                "-B",
                str(build_path),
                f"-DKAITAI_MAIN_FILE={main_path.resolve()}",
                f"-DCMAKE_INSTALL_PREFIX={dest_path.resolve()}",
                f"-DAWKWARD_VERSION={get_awkward_version()}"
            ],
            check=True,
        )

        # Run build
        subprocess.run(
            [cmake_path, "--build", str(build_path)],
            check=True,
        )

        # Install!
        subprocess.run(
            [cmake_path, "--install", str(build_path)],
            check=True,
        )


def main(argv: list[str] = None):
    parser = argparse.ArgumentParser()
    parser.add_argument("file", help="Main `.cpp` file to build", type=pathlib.Path)
    parser.add_argument(
        "-d",
        "--dest",
        type=pathlib.Path,
        help="Explicitly specify a destination for the build shared library",
    )
    parser.add_argument(
        "-b", "--build", type=pathlib.Path, help="Explicitly specify a build location"
    )

    args = parser.parse_args(argv)

    if args.dest is None:
        dest = args.file.parent
    else:
        dest = args.dest

    build_with_cmake(args.file, dest, args.build)


if __name__ == "__main__":
    main()
