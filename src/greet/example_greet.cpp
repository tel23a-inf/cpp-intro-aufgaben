#include <string>

#include "test.h"

std::string greet() { return "Hello C++!"; }

TEST_CASE("Hello C++") { CHECK(greet() == "Hello C++!"); }
