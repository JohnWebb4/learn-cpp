add_library(chapter_2 STATIC
  src/summary.cpp
)
target_link_libraries(chapter_2 PRIVATE common)
target_include_directories(chapter_2 PUBLIC "./src")

add_executable(chapter_2_test
  test/summary_test.cpp
)

target_link_libraries(chapter_2_test PRIVATE common)
target_link_libraries(chapter_2_test PUBLIC chapter_2)
target_link_libraries(chapter_2_test PUBLIC gtest::gtest)

include(GoogleTest)
gtest_discover_tests(chapter_2_test DISCOVERY_MODE PRE_TEST)
