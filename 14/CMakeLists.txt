cmake_minimum_required(VERSION 3.20)

project(hello)

set (VERSION_MAJOR 0)
set (VERSION_MINOR 1)
set (VERSION_PATCH 2)
set (hello_VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

configure_file(ver.h.in ${PROJECT_BINARY_DIR}/ver.h)
configure_file(path.h.in ${PROJECT_BINARY_DIR}/path.h @ONLY)

add_executable(hello main.cpp)

target_include_directories(hello PRIVATE ${CMAKE_BINARY_DIR})
