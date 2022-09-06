cmake_minimum_required(VERSION 3.20)

project(hello)

# change 1: replaced with a variable
add_executable(${PROJECT_NAME} main.cpp)

# change 2: print stuff
message("PROJECT_NAME=${PROJECT_NAME}")

# change 3: function
function(print var)
  # dereference the dereferenced
  message(${var}=${${var}})
endfunction()

print(PROJECT_VERSION)
print(PROJECT_BINARY_DIR)

# change 4: set variable
set(MYVAR "hello myvar")

# change 5: variadic function
function(printv)
  # all args in a list
  message("ARGN=${ARGN}")
  # number of args
  message("ARGC=${ARGC}")
  # var by index
  message("arg0=${ARGV0}")
  message("arg1=${ARGV1}")
endfunction()

printv(PROJECT_NAME MYVAR)

# change 6: loop
function(printvv)
  foreach(var ${ARGN})
    message("${var}=${${var}}")
  endforeach()
endfunction()

printvv(PROJECT_NAME MYVAR)

# macro
# macro(printvv)
#   foreach(var ${ARGN})
#     message("${var}=${${var}}")
#   endforeach()
#   set(MYVAR "no hello")
# endmacro()

# change 7: print_env
# export MY_ENV=something && cmake -Bbuild
function(print_env)
  foreach(var ${ARGN})
    message("${var}=$ENV{${var}}")
  endforeach()
endfunction()

print_env(MY_ENV)
