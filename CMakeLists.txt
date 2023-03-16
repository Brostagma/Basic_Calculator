cmake_minimum_required(VERSION 3.24)
project(Basic_Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Basic_Calculator main.cpp menu/menu.cpp menu/menu.h input/input.cpp input/input.h operations/operations.cpp operations/operations.h)
