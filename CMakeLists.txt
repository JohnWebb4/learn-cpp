cmake_minimum_required(VERSION 4.1.0)

project(LearnCpp VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

configure_file(learn_cpp_config.h.in learn_cpp_config.h)

find_package(GTest REQUIRED gtest gmock gtest_main gmock_main)

enable_testing()

add_library(common INTERFACE)
if (MSVC)
target_compile_options(common INTERFACE
	/Zi
	/permissive-
	/W4
	/WX
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
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
add_subdirectory(chapter_2)
add_subdirectory(chapter_4)
