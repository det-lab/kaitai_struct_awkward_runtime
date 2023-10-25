cmake_minimum_required(VERSION 3.19...3.26)
project(awkward_kaitai CXX)

set(KAITAI_DIR "" CACHE STRING "Specify the directory for the generated kaitai_struct_compiler files")
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

file(GLOB KAITAI_SOURCE_FILES CONFIGURE_DEPENDS "${KAITAI_DIR}/*.cpp")
file(GLOB KAITAI_HEADER_FILES CONFIGURE_DEPENDS "${KAITAI_DIR}/*.h")

add_library(awkward_kaitai ${KSY_MODULE}.cpp) 
target_link_libraries(awkward_kaitai PRIVATE awkward::layout-builder kaitai_struct_cpp_stl_runtime)

# Install pure-python files
# file(GLOB_RECURSE PYTHON_SOURCES "src/${SKBUILD_PROJECT_NAME}/*.py")

# install(
#   TARGETS awkward_${KSY_MODULE} kaitai_struct_cpp_stl_runtime
#   LIBRARY DESTINATION "${SKBUILD_PROJECT_NAME}/lib"
#   RUNTIME DESTINATION "${SKBUILD_PROJECT_NAME}/lib"
#   ARCHIVE DESTINATION "${SKBUILD_PROJECT_NAME}/lib")

# install(FILES ${PYTHON_SOURCES} DESTINATION ${SKBUILD_PROJECT_NAME})

# Install custom __init__.py
# install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${SKBUILD_PROJECT_NAME}/__init__.py DESTINATION ${SKBUILD_PROJECT_NAME})
