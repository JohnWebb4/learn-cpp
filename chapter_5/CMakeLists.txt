add_library(chapter_5 STATIC
  src/part_7_string.cpp
  src/summary.cpp
)

target_link_libraries(chapter_5 PRIVATE common)
target_include_directories(chapter_5 PUBLIC "./src")

add_executable(chapter_5_test
    test/part_7_string_test.cpp
    test/summary_test.cpp
)

target_link_libraries(chapter_5_test PRIVATE common)
target_link_libraries(chapter_5_test PUBLIC chapter_5)
target_link_libraries(chapter_5_test PUBLIC gtest::gtest)

include(GoogleTest)
gtest_discover_tests(chapter_5_test DISCOVERY_MODE PRE_TEST)