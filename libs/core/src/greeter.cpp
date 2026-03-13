#include <prj/core/greeter.h>

#include <sstream>

namespace myProject::core {
    /// Generates a greeting.
    /// @param name Person to be greeted
    /// @return Greeting text
    std::string Greeter::greet(const std::string& name) {
        std::stringstream ss;
        ss << "Hello, " << name << "!";
        return ss.str();
    }

}
