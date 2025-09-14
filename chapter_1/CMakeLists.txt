add_library(chapter_1 STATIC
    src/part_6_initialization.cpp
    src/part_11_program.cpp
)
target_link_libraries(chapter_1 PRIVATE common)
target_include_directories(chapter_1 PUBLIC "${PROJECT_BINARY_DIR}" "./src")

add_executable(chapter_1_test
    test/part_6_test.cpp
    test/part_11_test.cpp
)
target_link_libraries(chapter_1_test PRIVATE common)
target_link_libraries(chapter_1_test PUBLIC chapter_1)
target_link_libraries(chapter_1_test PUBLIC gtest::gtest)

include(GoogleTest)
gtest_discover_tests(chapter_1_test DISCOVERY_MODE PRE_TEST)
