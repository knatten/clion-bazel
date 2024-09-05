cmake_minimum_required(VERSION 3.25)
project(demo)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(foo)
add_subdirectory(tests/foo)

