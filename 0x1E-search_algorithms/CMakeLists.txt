cmake_minimum_required(VERSION 3.15)
project(0x1E_search_algorithms C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic")

add_executable(0x1E_search_algorithms
        search_algos.h
        1-binary.c
        1-main.c)