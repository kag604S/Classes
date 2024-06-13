cmake_minimum_required(VERSION 3.28)
project(classes2)

set(CMAKE_CXX_STANDARD 17)

add_executable(classes2 main.cpp
        Rectangle.cpp
        Rectangle.h
        Circle.cpp
        Circle.h
        Triangle.cpp
        Triangle.h)
