cmake_minimum_required(VERSION 3.8)
project(Primos)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c calculos.h calculos.c)
add_executable(Primos ${SOURCE_FILES} calculos.h calculos.c)