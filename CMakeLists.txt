cmake_minimum_required(VERSION 3.31)

project(MyProject
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
option(ENABLE_TEST_COVERAGE "Enable test coverage" OFF)
if (ENABLE_TEST_COVERAGE)
    message(STATUS "Coverage enabled")
    add_compile_options(--coverage -O0 -g)
    add_link_options(--coverage)
endif ()

include(ProjectOptions)

add_subdirectory(libs)

add_subdirectory(apps)

option(BUILD_TESTING "Enable testing" ON)
if (${BUILD_TESTING})
    add_subdirectory(tests)
endif ()

add_subdirectory(docs)
