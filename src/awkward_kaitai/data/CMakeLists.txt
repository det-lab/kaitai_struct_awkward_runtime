cmake_minimum_required(VERSION 3.19...3.26)
project(awkward_kaitai CXX)

include(FetchContent)

set(CMAKE_ENABLE_EXPORTS true)

set(KAITAI_MAIN_FILE "" CACHE STRING "Specify the name of the main KSY file")
set(KAITAI_STRUCT_CPP_STL_RUNTIME_VERSION "0.10.1")
if(NOT DEFINED AWKWARD_VERSION)
    message(FATAL_ERROR "AWKWARD_VERSION is not set")
endif(NOT DEFINED AWKWARD_VERSION)

if(NOT EXISTS "${KAITAI_MAIN_FILE}")
   message(FATAL_ERROR "Could not find main file ${KAITAI_MAIN_FILE}")
endif()

# Parse Kaitai name
cmake_path(GET KAITAI_MAIN_FILE PARENT_PATH KAITAI_DIR)
cmake_path(GET KAITAI_MAIN_FILE STEM LAST_ONLY KAITAI_NAME)
string(TOUPPER "${KAITAI_NAME}" KAITAI_NAME_UPPER)

# Download kaitai struct headers
FetchContent_Declare(
  kaitai_struct_cpp_stl_runtime
  URL      https://github.com/kaitai-io/kaitai_struct_cpp_stl_runtime/archive/refs/tags/${KAITAI_STRUCT_CPP_STL_RUNTIME_VERSION}.zip
  # Use patched CMakeLists.txt
  PATCH_COMMAND ${CMAKE_COMMAND} -E copy
        "${CMAKE_CURRENT_SOURCE_DIR}/kaitai_struct_cpp_stl_runtime/CMakeLists.txt" <SOURCE_DIR>/CMakeLists.txt
)

FetchContent_GetProperties(kaitai_struct_cpp_stl_runtime)
if(NOT kaitai_struct_cpp_stl_runtime_POPULATED)
  FetchContent_Populate(kaitai_struct_cpp_stl_runtime)
  add_subdirectory(${kaitai_struct_cpp_stl_runtime_SOURCE_DIR} ${kaitai_struct_cpp_stl_runtime_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# Download awkward headers
FetchContent_Declare(
  awkward-headers
  URL      https://github.com/scikit-hep/awkward/releases/download/${AWKWARD_VERSION}/header-only.zip
)

FetchContent_GetProperties(awkward-headers)
if(NOT awkward-headers_POPULATED)
  FetchContent_Populate(awkward-headers)
  add_subdirectory(${awkward-headers_SOURCE_DIR} ${awkward-headers_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

file(GLOB KAITAI_SOURCE_FILES CONFIGURE_DEPENDS "${KAITAI_DIR}/*.cpp")

# Create a shared library
add_library("${KAITAI_NAME}" SHARED ${KAITAI_SOURCE_FILES})
target_include_directories("${KAITAI_NAME}" PRIVATE ${KAITAI_DIR})
# Ensure we only build the ctypes interface for a single module
target_compile_definitions("${KAITAI_NAME}" PRIVATE "USE_${KAITAI_NAME_UPPER}")
# Link to Awkward Array and the kaitai-struct shared library
target_link_libraries("${KAITAI_NAME}" PRIVATE awkward::layout-builder kaitai_struct_cpp_stl_runtime)

# Install directly into the install prefix
install(
  TARGETS "${KAITAI_NAME}"
  LIBRARY DESTINATION "${CMAKE_INSTALL_PREFIX}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}")
