enable_testing()

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

function(register_test_target target)
    set_property(GLOBAL APPEND PROPERTY ALL_TEST_TARGETS ${target})
endfunction()

add_subdirectory(core)

get_property(test_targets GLOBAL PROPERTY ALL_TEST_TARGETS)
add_custom_target(build_tests DEPENDS ${test_targets})
