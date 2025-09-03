add_library(learn_1_11 STATIC
    learn_1_11_program.cpp
)
target_link_libraries(learn_1_11 PRIVATE common)

add_executable(learn_1_11_test "learn_1_11_test.cpp")

target_link_libraries(learn_1_11_test PRIVATE common)
target_link_libraries(learn_1_11_test PUBLIC learn_1_11)

add_test(NAME learn_1_11_test
         COMMAND learn_1_11_test)