cmake_minimum_required(VERSION 3.25)

add_executable(test_foo test_foo.cpp)
target_link_libraries(test_foo foo gtest_main)
