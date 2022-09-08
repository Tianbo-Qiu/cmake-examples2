cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(hello)

add_library(math SHARED src/math.cpp)
# alias
add_library(lib::math ALIAS math)
target_include_directories(math PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(hello src/main.cpp)

target_link_libraries(hello PRIVATE lib::math)
