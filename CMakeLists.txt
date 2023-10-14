cmake_minimum_required(VERSION 3.26)
project(printf)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(printf
        _putchar.c
        main.c
        main.h
        printf.c
        printf_binary.c
        printf_char.c
        printf_int.c
        printf_string.c
        README.md)
