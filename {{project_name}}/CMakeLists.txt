cmake_minimum_required(VERSION 3.19...3.26)
project(${SKBUILD_PROJECT_NAME} CXX)

set(KSY "" CACHE STRING "Specify the KSY file path")
set(BUILD_SHARED_LIBS ON)

find_package(pybind11 CONFIG REQUIRED)

# Setup the RPATH for built libraries
if(APPLE)
  set(CMAKE_INSTALL_RPATH "@loader_path")
else()
  SET(CMAKE_INSTALL_RPATH "$ORIGIN")
endif()

add_subdirectory(kaitai_struct_cpp_stl_runtime EXCLUDE_FROM_ALL)

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

# Run sbt package command to compile kaitai_struct_compiler code
execute_process(
    COMMAND sbt package
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/kaitai_struct_compiler
    COMMAND_ERROR_IS_FATAL ANY
)

execute_process(
    COMMAND ./kaitai-struct-compiler -t awkward --outdir src-${SKBUILD_PROJECT_NAME} ${KSY} #package name should be declared as a string
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND_ERROR_IS_FATAL ANY
)

string(REGEX MATCH "([^/]+)$" KSY_MODULE ${KSY})
string(REGEX REPLACE "\\.ksy$" "" KSY_MODULE ${KSY_MODULE})

pybind11_add_module(awkward_${KSY_MODULE} src-${SKBUILD_PROJECT_NAME}/${KSY_MODULE}_main.cpp src-${SKBUILD_PROJECT_NAME}/${KSY_MODULE}.cpp) 
target_link_libraries(awkward_${KSY_MODULE} PRIVATE awkward::layout-builder kaitai_struct_cpp_stl_runtime)

# Install pure-python files
file(GLOB_RECURSE PYTHON_SOURCES "src/${SKBUILD_PROJECT_NAME}/*.py")

install(
  TARGETS awkward_${KSY_MODULE} kaitai_struct_cpp_stl_runtime
  LIBRARY DESTINATION "${SKBUILD_PROJECT_NAME}/lib"
  RUNTIME DESTINATION "${SKBUILD_PROJECT_NAME}/lib"
  ARCHIVE DESTINATION "${SKBUILD_PROJECT_NAME}/lib")

install(FILES ${PYTHON_SOURCES} DESTINATION ${SKBUILD_PROJECT_NAME})
