cmake_minimum_required(VERSION 4.1.0)

project(LearnCpp VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(learn_cpp_config.h.in learn_cpp_config.h)

find_package(GTest REQUIRED)

enable_testing()

add_library(common INTERFACE)
if (MSVC)
target_compile_options(common INTERFACE
	/Zi
	/permissive-
	/W4
	/WX
)
else ()
target_compile_options(common INTERFACE
	-ggdb
	-pedantic-errors
	-Wall
	-Weffc++
	-Wextra
	-Wconversion
	-Wsign-conversion
	-Werror
)
endif()

add_subdirectory(chapter_1)
