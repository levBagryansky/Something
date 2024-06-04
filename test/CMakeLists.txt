add_executable(regfile-test
        regfile-test.cpp
        )
verilate(regfile-test SOURCES ${CMAKE_SOURCE_DIR}/src/regfile.v  VERILATOR_ARGS --trace)
target_link_libraries(regfile-test PUBLIC
        GTest::gtest_main
        )

include(GoogleTest)
gtest_discover_tests(regfile-test)
