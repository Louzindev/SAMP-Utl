
cmake_minimum_required (VERSION 3.8)

project ("SAMP-Utl" VERSION 1.0.0)
configure_file(version.h.in version.h)

# Include sub-projects.
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/SAMP-Utl/Deps/cmake-modules")

set(SDK "${CMAKE_SOURCE_DIR}/SAMP-Utl/Deps/sdk")
set(GDK "${CMAKE_SOURCE_DIR}/SAMP-Utl/Deps/sampgdk")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/test/plugins)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_subdirectory ("SAMP-Utl")
