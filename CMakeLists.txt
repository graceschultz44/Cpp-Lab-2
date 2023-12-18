cmake_minimum_required(VERSION 3.23)
project(program2)

set(CMAKE_CXX_STANDARD 14)

add_executable(program2 main.cpp Test.cpp Test.h functions.cpp functions.h)
