cmake_minimum_required(VERSION 4.1.0)

project(LearnCpp VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(
    -ggdb
-pedantic-errors
-Wall
-Weffc++
-Wextra
-Wconversion
-Wsign-conversion
-Werror
)

enable_testing()

configure_file(LearnCppConfig.h.in LearnCppConfig.h)

add_executable(LearnCpp main.cpp)
target_include_directories(LearnCpp PUBLIC
    "${PROJECT_BINARY_DIR}"
)
