#include <vector>

#include "test.h"

/// Erwartet einen Vektor und eine Zahl x.
/// Gibt zurück, wie oft x im Vektor vorkommt.
int count(std::vector<int> v, int x) {
  int result = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == x) {
      result++;
    }
  }
  return result;
}

TEST_SUITE("example_count") {
  TEST_CASE("empty vector") {
    std::vector<int> v;
    CHECK(count(v, 0) == 0);
    CHECK(count(v, 1) == 0);
    CHECK(count(v, 42) == 0);
  }

  TEST_CASE("no occurence") {
    std::vector<int> v = {1, 2, 3, 4, 5};
    CHECK(count(v, 0) == 0);
  }

  TEST_CASE("one occurence") {
    std::vector<int> v = {1, 2, 3, 4, 5};
    CHECK(count(v, 1) == 1);
  }

  TEST_CASE("multiple occurences") {
    std::vector<int> v = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    CHECK(count(v, 1) == 2);
  }
}
