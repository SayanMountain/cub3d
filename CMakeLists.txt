cmake_minimum_required(VERSION 3.20)
project(cub3d C)

set(CMAKE_C_STANDARD 99)

include_directories(. libft)
add_subdirectory(libft)

add_executable(cub3d main.c)