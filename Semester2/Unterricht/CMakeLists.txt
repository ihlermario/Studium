cmake_minimum_required(VERSION 3.20)

# define the project name
project(basics_in_Cpp VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

add_executable(CPP_EINSTIEG helloworld.cpp)
add_executable(CPP_KLASSEN class.cpp)
add_executable(malloc malloc.c)
add_executable(	malloc_cpp malloc.cpp)