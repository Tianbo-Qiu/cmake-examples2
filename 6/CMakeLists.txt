cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(hello)

add_library(math STATIC src/math.cpp)
target_include_directories(math PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(hello src/main.cpp)

target_link_libraries(hello PRIVATE math)
