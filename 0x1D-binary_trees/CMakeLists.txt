cmake_minimum_required(VERSION 3.14)
project(0x1D-binary_trees C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic")

add_executable(bintree
        binary_tree_print.c
        0-binary_tree_node.c
        1-binary_tree_insert_left.c
        2-binary_tree_insert_right.c
        15-binary_tree_is_full.c 15-main.c)
