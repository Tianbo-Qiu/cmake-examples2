cmake_minimum_required(VERSION 3.20)

project(hello)

add_executable(hello main.cpp)

target_compile_features(hello PUBLIC cxx_auto_type)

message("List of compile features: ${CMAKE_CXX_COMPILE_FEATURES}")
