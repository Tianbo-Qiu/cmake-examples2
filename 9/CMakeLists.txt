cmake_minimum_required(VERSION 3.20)

project(hello)

add_executable(hello main.cpp)

target_compile_definitions(hello PRIVATE EX2)
