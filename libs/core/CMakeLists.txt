add_library(core)

# Add source files
target_sources(core PRIVATE src/greeter.cpp)

target_include_directories(core PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                                       $<INSTALL_INTERFACE:include>
)

# Find dependencies

# Link depedencies
target_link_libraries(core
                      PUBLIC
                      PRIVATE
)

target_compile_features(core PUBLIC cxx_std_23)
