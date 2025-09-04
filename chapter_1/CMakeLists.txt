include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(chapter_1 STATIC
    learn_1_6_initialization.cpp
)
target_link_libraries(chapter_1 PRIVATE common)
target_include_directories(chapter_1 PUBLIC "${PROJECT_BINARY_DIR}")


enable_testing()
add_executable(chapter_1_test learn_1_6_test.cpp)
target_link_libraries(chapter_1_test PRIVATE common)
target_link_libraries(chapter_1_test PUBLIC chapter_1)
target_link_libraries(chapter_1_test PUBLIC GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(chapter_1_test)