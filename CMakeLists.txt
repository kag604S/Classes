cmake_minimum_required(VERSION 3.28)
project(classcircle)

set(CMAKE_CXX_STANDARD 17)

add_executable(classcircle main.cpp
        shapes.cpp
        shapes.h)
