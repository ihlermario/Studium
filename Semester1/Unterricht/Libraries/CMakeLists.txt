cmake_minimum_required(VERSION 3.20)

project(prototype_test LANGUAGE C  CXX)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -pedantic -O0)

add_library(library1 STATIC src/sum.c)
add_library(library2 SHARED src/batman.c)

target_include_directories(library1 PUBLIC include)
target_include_directories(library2 PUBLIC include)

add_executable(Library_Test src/main.c)

target_include_directories(Library_Test PUBLIC include)
target_link_libraries(Library_Test PRIVAT library1)
target_link_libraries(Library_Test PRIVAT library2)






