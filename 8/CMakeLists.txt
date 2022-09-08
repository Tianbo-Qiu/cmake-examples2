cmake_minimum_required(VERSION 3.20)

project(hello)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(greet SHARED src/hello.cpp)
target_include_directories(greet PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(hello src/main.cpp)
target_link_libraries(hello PRIVATE greet)

# install binaries
install(TARGETS hello DESTINATION bin)
# install lib
install(TARGETS greet LIBRARY DESTINATION lib)
# install header files
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include)
# install config
install(FILES hello.conf DESTINATION etc)

