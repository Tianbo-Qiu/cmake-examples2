project(lib2)

add_library(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/adder.cpp)
add_library(sub::lib2 ALIAS ${PROJECT_NAME})

# PUBLIC: the path is for lib itself and others
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
