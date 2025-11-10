# Run scala to create the CPP source code
make test_artifacts/soudan.cpp
# Compile CPP code to shared library
export testcase=soudan
make compile_test
# Create an executable in CPP that uses the shared library to read a file
/usr/bin/g++ \
  -fdiagnostics-color=always \
  -g \
  -ggdb \
  -fPIC \
  ./tests/debug_tests.cpp \
  ./test_artifacts/soudan.cpp \
  ./build/build/_deps/kaitai_struct_cpp_stl_runtime-src/kaitai/kaitaistream.cpp \
  -o ./tests/debug_tests \
  -I ./test_artifacts \
  -I ./build/build/_deps/kaitai_struct_cpp_stl_runtime-src \
  -I ./build/build/_deps/awkward-headers-src/layout-builder \
  -I ./build/build/_deps/awkward-headers-src/growable-buffer \
  -I ./build/build/_deps/awkward-headers-src/builder-options \
  -DKS_STR_ENCODING_ICONV
# Execute it
./tests/debug_tests
