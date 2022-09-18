cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(palindrome palindrome.cpp)
add_library(lib::palindrome ALIAS palindrome)
target_include_directories(palindrome PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# unit testing
enable_testing()

add_executable(palindrome_test palindrome.test.cpp)
target_link_libraries(palindrome_test Boost::unit_test_framework lib::palindrome)

target_compile_definitions(palindrome_test PRIVATE BOOST_TEST_DYN_LINK)

add_test(palindrome_test palindrome_test)
