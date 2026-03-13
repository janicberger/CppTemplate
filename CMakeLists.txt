cmake_minimum_required(VERSION 3.31)

project(MyProject
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

include(CTest)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(ProjectOptions)

add_subdirectory(libs)

add_subdirectory(apps)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

include(Doxygen)