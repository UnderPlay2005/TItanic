cmake_minimum_required(VERSION 3.0.0)
project(Titanic VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(Titanic main.cpp titanic.h titanic.cpp)
