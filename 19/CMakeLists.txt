cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# unit testing
enable_testing()

add_subdirectory(palindrome)

add_executable(hello main.cpp)
target_link_libraries(hello lib::palindrome)
