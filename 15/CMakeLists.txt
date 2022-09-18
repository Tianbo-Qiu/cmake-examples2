cmake_minimum_required(VERSION 3.20)

project(hello)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Protobuf REQUIRED)

if(PROTOBUF_FOUND)
  message("protobuf found")
else()
  message(FATAL_ERROR "cannot find protobuf")
endif()

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS AddressBook.proto)

message("PROTO_SRCS = ${PROTO_SRCS}")
message("PROTO_HDRS = ${PROTO_HDRS}")

add_executable(hello main.cpp ${PROTO_SRCS} ${PROTO_HDRS})

target_include_directories(hello PRIVATE ${PROTOBUF_INCLUDE_DIRS}
                                         ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(hello PRIVATE ${PROTOBUF_LIBRARIES})

