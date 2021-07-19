cmake_minimum_required(VERSION 3.17)
project(my_server C)

set(CMAKE_C_STANDARD 11)

add_executable(my_server main.c my_recv.h my_recv.c)