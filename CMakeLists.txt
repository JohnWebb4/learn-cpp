cmake_minimum_required(VERSION 4.1.0)

project(LearnCpp VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

configure_file(learn_cpp_config.h.in learn_cpp_config.h)

add_subdirectory(learn_1_6)