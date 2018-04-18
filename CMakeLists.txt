cmake_minimum_required(VERSION 3.9)
project(cpp_images)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_images main.cpp models/Shape.cpp models/Shape.h models/Triangle.cpp models/Triangle.h models/Rectangle.cpp models/Rectangle.h models/Point.cpp models/Point.h models/Right.cpp models/Right.h)