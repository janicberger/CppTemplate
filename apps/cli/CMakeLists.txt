add_executable(cli main.cpp)

find_package(fmt CONFIG REQUIRED)

target_link_libraries(cli PRIVATE core fmt::fmt)
