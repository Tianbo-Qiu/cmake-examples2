cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(hello)

add_executable(hello src/main.cpp src/math.cpp)

target_include_directories(hello PRIVATE ${PROJECT_SOURCE_DIR}/include)
