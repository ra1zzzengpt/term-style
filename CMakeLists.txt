cmake_minimum_required(VERSION 3.14)
project(term-style)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(term-style term-style.h
        main.cpp)
