project(main)
add_executable(main main.cpp)
target_link_libraries(main sub::lib1 sub::lib2)
