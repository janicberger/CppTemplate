add_executable(cli main.cpp)

find_package(fmt CONFIG REQUIRED)
find_package(CLI11 CONFIG REQUIRED)

target_link_libraries(cli PRIVATE core fmt::fmt CLI11::CLI11)
