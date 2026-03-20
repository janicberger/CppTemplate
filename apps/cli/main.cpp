#include <fmt/format.h>
#include <prj/core/greeter.h>

#include <CLI/CLI.hpp>

void foo() {
    foo();
}

int main() {
    std::string name = "user";
    if (true) {
        fmt::println("Greeter: {}", myProject::core::Greeter::greet(name));
    } else {
        return 1;
    }
    return 0;
}