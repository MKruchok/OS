cmake_minimum_required(VERSION 3.22)
project(OS C)

set(CMAKE_C_STANDARD 99)

add_executable(OS write-read.c open1.c open2.c fork1.c fork2.c wait1.c wait2.c wait3.c)
