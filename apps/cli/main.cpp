#include <fmt/format.h>
#include <prj/core/greeter.h>

int main() {
    fmt::println("Greeter: {}", myProject::core::Greeter::greet("user"));
    return 0;
}