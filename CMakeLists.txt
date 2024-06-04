cmake_minimum_required(VERSION 3.26)

project(Something)

find_package(verilator)

set(CMAKE_EXE_LINKER_FLAGS )
add_executable(Something src/main.cpp)
verilate(Something SOURCES src/regfile.v VERILATOR_ARGS --trace)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(test)
