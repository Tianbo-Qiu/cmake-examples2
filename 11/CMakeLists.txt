cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Boost 1.46.1 REQUIRED COMPONENTS filesystem system)

if(Boost_FOUND)
  message("boost found")
else()
  message(FATAL_ERROR "Cannot find boost")
endif()

set(CMAKE_CXX_STANDARD 17)

add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE Boost::filesystem)
