cmake_minimum_required(VERSION 3.10)

project(3DCubeASCII VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(3DCubeASCII src/Source/Main.cpp src/Source/Vertex.cpp src/Source/Util.cpp)

