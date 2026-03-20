#include <fmt/format.h>
#include <prj/core/greeter.h>

#include <CLI/CLI.hpp>

int main() {
    fmt::println("Greeter: {}", myProject::core::Greeter::greet("user"));
    return 0;
}