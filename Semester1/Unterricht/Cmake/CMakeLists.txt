cmake_minimum_required(VERSION 3.20)

project(cmake_example VERSION 1.0)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -Werror -pedantic -O0)


add_executable(Example example.c)
add_executable(Example2 example.c)





