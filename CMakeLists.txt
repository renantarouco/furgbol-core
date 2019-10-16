cmake_minimum_required(VERSION 3.10)
project(furgbol-core)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/dist")

add_subdirectory("src/proto")
add_subdirectory("src/io")
