#pragma once
#include <string>

namespace myProject::core {
    class Greeter {
    public:
        static std::string greet(const std::string& name);
    };
}
