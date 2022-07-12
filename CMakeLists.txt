cmake_minimum_required(VERSION 3.10)

project(data_structures)

add_executable(data_structures main.c node/node.c stack/stack.c)
target_include_directories(data_structures PUBLIC
    node/,
    stack/
)