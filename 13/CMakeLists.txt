cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(subdir1)
add_subdirectory(subdir2)
add_subdirectory(subdir3)
