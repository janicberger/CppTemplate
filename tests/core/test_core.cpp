#include <gtest/gtest.h>
#include <prj/core/greeter.h>

TEST(Greet, name) {
    EXPECT_EQ(myProject::core::Greeter::greet("Guy"), "Hello, Guy!");
}