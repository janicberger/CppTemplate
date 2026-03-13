add_library(core)

target_sources(core
    PRIVATE
        # Add source files
        src/greeter.cpp
)

target_include_directories(core
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Find dependencies

target_link_libraries(core
    PUBLIC
        # Link dependencies
    PRIVATE
)

target_compile_features(core PUBLIC cxx_std_23)