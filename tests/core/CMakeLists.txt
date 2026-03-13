add_executable(core_tests
    test_core.cpp
)

target_link_libraries(core_tests
    PRIVATE
        core
        GTest::gtest
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(core_tests)