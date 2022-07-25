cmake_minimum_required(VERSION 3.22)
project(Neural_networks)

set(CMAKE_CXX_STANDARD 14)

add_executable(Neural_networks main.cpp Neuron.cpp Neuron.h Network.cpp Network.h)
