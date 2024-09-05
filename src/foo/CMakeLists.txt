cmake_minimum_required(VERSION 3.25)

add_library(foo foo.cpp)

target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})