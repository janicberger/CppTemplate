add_executable(core_tests test_core.cpp)

target_link_libraries(core_tests
        PRIVATE core
        GTest::gtest
        GTest::gtest_main
        GTest::gmock
        GTest::gmock_main
)

gtest_discover_tests(core_tests)

register_test_target(core_tests)
