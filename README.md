# iglsynth-cmake
Trying out CMake configurations

## Description
This code implements a Two-Player game setting where:
Player 1 = {Archer, Knight, Villager}
Player 2 = {Tower1, Tower2}
Every unit has a name and a health as one may expect. More functionalities will be added as we move forward.

## Purpose
The code is intended to cover the usage of classes, inheritance, virtual functions, interface class, etc. and
bind them to Python using pybind11. The idea is to explore CMake configurations suitable for a Cross-Compiler and
Cross-Platform project.

## Setup
Clone the repository into your machine and run the below commands. If you are using docker, then mount the entire
directory into the container and then run the below commands on the console within docker.
```
$ cd <path>/iglsynth-cmake/build
$ cmake ..
$ make
$ ./iglsynth_cmake
```

## TODO
- Bind the Player class constructor and member functions to Python using pybind11
- Should the bindings be maintained within ```src/binding_test.cpp``` or in a separate file??