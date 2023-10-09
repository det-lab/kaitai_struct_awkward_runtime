cmake_minimum_required(VERSION 3.19...3.26)
project(kaitai_awkward_runtime CXX)

set(KSY "" CACHE STRING "Specify the KSY file path")

string(REGEX MATCH "([^/]+)$" package_name ${KSY})
string(REGEX REPLACE "\\.ksy$" "" package_name ${package_name})
set(PACKAGE_NAME ${package_name})

set(BUILD_SHARED_LIBS ON)
set(BUILD_STATIC_LIBS OFF)

find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(kaitai_struct_cpp_stl_runtime)

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

MESSAGE(WARNING "${CMAKE_SOURCE_DIR}/kaitai_struct_compiler")

# Run sbt package command to compile kaitai_struct_compiler code
execute_process(
    COMMAND sbt package
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/kaitai_struct_compiler
    COMMAND_ERROR_IS_FATAL ANY
)

execute_process(
    COMMAND ./kaitai-struct-compiler -t awkward --outdir src-${PACKAGE_NAME} ${KSY} #package name should be declared as a string
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND_ERROR_IS_FATAL ANY
)

pybind11_add_module(awkward_${PACKAGE_NAME} src-${PACKAGE_NAME}/${PACKAGE_NAME}_main.cpp src-${PACKAGE_NAME}/${PACKAGE_NAME}.cpp) 
target_link_libraries(awkward_${PACKAGE_NAME} PRIVATE awkward::layout-builder kaitai_struct_cpp_stl_runtime)

# Install into wheel
install(TARGETS awkward_${PACKAGE_NAME} DESTINATION .)
