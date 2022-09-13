project(subdir3)

add_executable(hello main.cpp)

target_link_libraries(hello sub::lib1 sub::lib2)
