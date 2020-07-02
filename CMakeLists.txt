cmake_minimum_required(VERSION 3.13)
project(iglsynth_cmake)

#set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/pybind11)
pybind11_add_module(iglsynthcmake bindings.cpp src/Player.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fPIC -O3 -DNDEBUG -fopenmp -fmax-errors=1")

add_executable(iglsynth_cmake src/binding_test.cpp include/binding_test.h src/Player.cpp include/Player.h)
