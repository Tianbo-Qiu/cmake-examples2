cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib1)
add_subdirectory(lib2)
add_subdirectory(src)
