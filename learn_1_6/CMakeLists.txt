add_library(learn_1_6 STATIC
    learn_1_6_initialization.cpp
)
target_link_libraries(learn_1_6 PRIVATE common)

target_include_directories(learn_1_6 PUBLIC "${PROJECT_BINARY_DIR}")

add_executable(learn_1_6_test "learn_1_6_test.cpp")

target_link_libraries(learn_1_6_test PRIVATE common)
target_link_libraries(learn_1_6_test PUBLIC learn_1_6)

add_test(NAME learn_1_6_initialization 
         COMMAND learn_1_6_test)