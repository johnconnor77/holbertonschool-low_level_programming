cmake_minimum_required(VERSION 3.14)

project(0x1B-sorting_algorithms C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic ")

add_executable(main

        print_array.c

        print_list.c

        1-insertion_sort_list.c 1-main.c)

