cmake_minimum_required(VERSION 3.23)
project(my_brainf_compiler C)

set(CMAKE_C_STANDARD 90)

add_executable(my_brainf_compiler interpreter.c interpreter.h main.c)
