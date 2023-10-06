cmake_minimum_required(VERSION 3.15...3.26)
project(kaitai_awkward_runtime CXX)

set(KSY "" CACHE STRING "Specify the KSY file path")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")

string(REGEX MATCH "([^/]+)$" package_name ${KSY})
string(REGEX REPLACE "\\.ksy$" "" package_name ${package_name})
set(PACKAGE_NAME ${package_name})
# set(CMAKE_ARGS "-DPACKAGE_NAME=${PACKAGE_NAME}")

set(BUILD_SHARED_LIBS OFF)
set(BUILD_STATIC_LIBS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

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

add_library (${PROJECT_NAME} ${MAIN_HEADERS} ${MAIN_SOURCES})

# Download awkward headers
include(FetchContent)
set(AWKWARD_VERSION "v2.4.3")
FetchContent_Declare(
  awkward-headers
  URL      https://github.com/scikit-hep/awkward/releases/download/${AWKWARD_VERSION}/header-only.zip
)

FetchContent_GetProperties(awkward-headers)
if(NOT awkward-headers_POPULATED)
  FetchContent_Populate(awkward-headers)
  add_subdirectory(${awkward-headers_SOURCE_DIR} ${awkward-headers_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_BINARY_DIR}/_deps/awkward-headers-src/layout-builder)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_BINARY_DIR}/_deps/awkward-headers-src/builder-options)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_BINARY_DIR}/_deps/awkward-headers-src/growable-buffer)

# Run sbt package command to compile kaitai_struct_compiler code
execute_process(
    COMMAND sbt package
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/kaitai_struct_compiler
)

execute_process(
    COMMAND ./kaitai-struct-compiler -t awkward --outdir src-${PACKAGE_NAME} ${KSY} #package name should be declared as a string
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

pybind11_add_module(awkward_${PACKAGE_NAME} src-${PACKAGE_NAME}/${PACKAGE_NAME}_main.cpp src-${PACKAGE_NAME}/${PACKAGE_NAME}.cpp) 
target_link_libraries(awkward_${PACKAGE_NAME} PRIVATE awkward::layout-builder)
target_include_directories(awkward_${PACKAGE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/kaitai_struct_cpp_stl_runtime)
target_link_libraries(awkward_${PACKAGE_NAME} PUBLIC kaitai_struct_cpp_stl_runtime)

# Install into wheel
install(TARGETS awkward_${PACKAGE_NAME} DESTINATION .)