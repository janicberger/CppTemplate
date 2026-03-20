cmake_minimum_required(VERSION 3.31)

project(MyProject
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(ProjectOptions)

add_subdirectory(libs)

add_subdirectory(apps)

option(BUILD_TESTING "Enable testing" ON)
enable_testing()
if(${BUILD_TESTING})
    add_subdirectory(tests)
endif()

include(Doxygen)
