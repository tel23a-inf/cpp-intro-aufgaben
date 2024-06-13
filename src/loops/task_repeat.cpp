#include <vector>

#include "test.h"

/// Erwartet zwei Zahlen n und count.
/// Liefert eine Liste, in der n count-mal wiederholt wird.
std::vector<int> repeat(int n, int count) {
  std::vector<int> result;
  // TODO
  return result;
}

TEST_CASE("count == 1") { CHECK(repeat(2, 1) == std::vector<int>{2}); }
TEST_CASE("count == 10") {
  CHECK(repeat(2, 10) == std::vector<int>{2, 2, 2, 2, 2, 2, 2, 2, 2, 2});
}
TEST_CASE("count == 0") { CHECK(repeat(2, 0) == std::vector<int>{}); }
