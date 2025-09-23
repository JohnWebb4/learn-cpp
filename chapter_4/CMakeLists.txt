add_library(chapter_4 STATIC
  src/part_12_conversion.cpp
)
target_link_libraries(chapter_4 PRIVATE common)
target_include_directories(chapter_4 PUBLIC "./src")

add_executable(chapter_4_test
  test/part_12_conversion_test.cpp
)

target_link_libraries(chapter_4_test PRIVATE common)
target_link_libraries(chapter_4_test PUBLIC chapter_4)
target_link_libraries(chapter_4_test PUBLIC gtest::gtest)

include(GoogleTest)
gtest_discover_tests(chapter_4_test DISCOVERY_MODE PRE_TEST)
