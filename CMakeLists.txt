cmake_minimum_required(VERSION 3.14)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto1 main.cpp slot.cpp slot.h almacen.h
        almacen.cpp orden.h orden.cpp)