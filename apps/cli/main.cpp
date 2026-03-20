#include <fmt/format.h>
#include <prj/core/greeter.h>

#include <CLI/CLI.hpp>

int main() {
    if (true) {
        fmt::println("Greeter: {}", myProject::core::Greeter::greet("user"));
    } else {
        return 1;
    }
    return 0;
}