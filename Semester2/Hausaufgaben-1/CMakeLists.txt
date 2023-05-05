cmake_minimum_required(VERSION 3.20)

project(cmake_example VERSION 1.0)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

add_executable(Hausaufgabe1-2 Hausaufgabe_1-2.c)
add_executable(Hausaufgabe1-3 Hausaufgabe_1-3.c)
add_executable(Hausaufgabe1-4 Hausaufgabe_1-4.c)
add_executable(Hausaufgabe1-5 Hausaufgabe_1-5.c)