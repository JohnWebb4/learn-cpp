add_library(LearnCppCode16 STATIC
    learn_1_6_initialization.cpp
)
target_link_libraries(LearnCppCode16 PRIVATE common)

target_include_directories(LearnCppCode16 PUBLIC "${PROJECT_BINARY_DIR}")

add_executable(LearnCppCode16Test "test.cpp")

target_link_libraries(LearnCppCode16Test PRIVATE common)
target_link_libraries(LearnCppCode16Test PUBLIC LearnCppCode16)

add_test(NAME LearnCppCode16Initialization
         COMMAND LearnCppCode16Test)