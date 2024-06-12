#include <vector>

#include "test.h"

/// Erwartet einen Vektor und eine Zahl x.
/// Gibt einen Vektor zurück, der nur die Zahlen enthält, die kleiner als x
/// sind.
std::vector<int> filter_less(std::vector<int> v, int x) {
  std::vector<int> result;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] < x) {
      result.push_back(v[i]);
    }
  }
  return result;
}

TEST_SUITE("example_filter_less") {
  TEST_CASE("empty vector") {
    std::vector<int> v;
    CHECK(filter_less(v, 0) == std::vector<int>{});
    CHECK(filter_less(v, 1) == std::vector<int>{});
    CHECK(filter_less(v, 42) == std::vector<int>{});
  }

  TEST_CASE("nonempty vector") {
    std::vector<int> v = {2, 1, 4, 5, 3};
    CHECK(filter_less(v, 1) == std::vector<int>{});
    CHECK(filter_less(v, 2) == std::vector<int>{1});
    CHECK(filter_less(v, 3) == std::vector<int>{2, 1});
    CHECK(filter_less(v, 4) == std::vector<int>{2, 1, 3});
    CHECK(filter_less(v, 5) == std::vector<int>{2, 1, 4, 3});
    CHECK(filter_less(v, 10) == std::vector<int>{2, 1, 4, 5, 3});
  }
}
