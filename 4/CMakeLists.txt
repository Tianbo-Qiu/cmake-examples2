cmake_minimum_required(VERSION 3.20)

project(hello)

add_library(math math.cpp)

add_executable(hello main.cpp)

target_link_libraries(hello math)

