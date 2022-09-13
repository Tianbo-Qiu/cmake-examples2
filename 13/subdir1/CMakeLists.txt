project(lib1)

# header only library
add_library(${PROJECT_NAME} INTERFACE)
add_library(sub::lib1 ALIAS ${PROJECT_NAME})

# INTERFACE: the lib(target) itself doesn't use it export it to others
# PROJECT_SOURCE_DIR current project source dir
target_include_directories(${PROJECT_NAME}
                           INTERFACE ${PROJECT_SOURCE_DIR}/include)
