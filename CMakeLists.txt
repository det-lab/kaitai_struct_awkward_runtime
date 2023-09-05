cmake_minimum_required(VERSION 3.15...3.26)
project(${SKBUILD_PROJECT_NAME} LANGUAGES CXX)

set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(kaitai_struct_cpp_stl_runtime)

set (MAIN_HEADERS
    kaitai_struct_cpp_stl_runtime/kaitai/kaitaistream.h
    kaitai_struct_cpp_stl_runtime/kaitai/kaitaistruct.h
    kaitai_struct_cpp_stl_runtime/kaitai/exceptions.h
)

set (MAIN_SOURCES
    kaitai_struct_cpp_stl_runtime/kaitai/kaitaistream.cpp
)

add_library (${SKBUILD_PROJECT_NAME} SHARED ${MAIN_HEADERS} ${MAIN_SOURCES})

include(FetchContent)
set(AWKWARD_VERSION "v2.1.0")
FetchContent_Declare(
  awkward-headers
  URL      https://github.com/scikit-hep/awkward/releases/download/${AWKWARD_VERSION}/header-only.zip
)

FetchContent_GetProperties(awkward-headers)
if(NOT awkward-headers_POPULATED)
  FetchContent_Populate(awkward-headers)
  add_subdirectory(${awkward-headers_SOURCE_DIR} ${awkward-headers_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

pybind11_add_module(my_app MODULE src/main.cpp)
target_link_libraries(my_app PRIVATE awkward::layout-builder)

install(TARGETS
    DESTINATION ${SKBUILD_PROJECT_NAME}
    PUBLIC_HEADER DESTINATION include/kaitai
)
