cmake_minimum_required(VERSION 3.14)
project(0x1D-binary_trees C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic")

add_executable(bintree
        binary_tree_print.c
        0-binary_tree_node.c
        1-binary_tree_insert_left.c
        2-binary_tree_insert_right.c
        3-binary_tree_delete.c
        10-binary_tree_depth.c
        11-binary_tree_size.c
        12-binary_tree_leaves.c
        13-binary_tree_nodes.c
        14-main.c 14-binary_tree_balance.c)
