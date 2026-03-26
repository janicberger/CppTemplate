#pragma once
#include <iostream>
#include <string>

namespace myProject::core {
    class Greeter {
    public:
        static void yo() { std::cout << "YOOOO" << std::endl; }
        static std::string greet(const std::string& name);
    };
}  // namespace myProject::core
