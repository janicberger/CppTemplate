#include <fmt/format.h>
#include <CLI/CLI.hpp>

#include <prj/core/greeter.h>

int main(const int argc, char **argv) {
    CLI::App app {"Greeter CLI App"};
    argv = app.ensure_utf8(argv);

    std::string name = "user";
    app.add_option("-n,--name", name, "Your name.");

    CLI11_PARSE(app, argc, argv);

    fmt::println("Greeter: {}", myProject::core::Greeter::greet(name));
    return 0;
}