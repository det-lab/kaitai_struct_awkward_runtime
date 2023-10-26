cmake_minimum_required(VERSION 3.19...3.26)
project(awkward_kaitai CXX)

set(KAITAI_MAIN_FILE "" CACHE STRING "Specify the name of the main KSY file")
set(BUILD_SHARED_LIBS ON)

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

cmake_path(GET KAITAI_MAIN_FILE PARENT_PATH KAITAI_DIR)
cmake_path(GET KAITAI_MAIN_FILE STEM LAST_ONLY KAITAI_NAME)
string(TOUPPER KAITAI_NAME KAITAI_NAME_UPPER)

file(GLOB KAITAI_SOURCE_FILES CONFIGURE_DEPENDS "${KAITAI_DIR}/*.cpp")

add_library(awkward_kaitai ${KAITAI_SOURCE_FILES})
target_include_directories(awkward_kaitai PRIVATE ${KAITAI_DIR})
target_link_libraries(awkward_kaitai PRIVATE awkward::layout-builder kaitai_struct_cpp_stl_runtime)
target_compile_definitions(awkward_kaitai PRIVATE "USE_${KAITAI_NAME_UPPER}")
set(CMAKE_INSTALL_PREFIX ${KAITAI_DIR})

install(
  TARGETS awkward_kaitai kaitai_struct_cpp_stl_runtime
  LIBRARY DESTINATION ""
  RUNTIME DESTINATION ""
  ARCHIVE DESTINATION "")
