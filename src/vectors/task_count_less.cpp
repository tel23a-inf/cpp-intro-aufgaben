#include <vector>

#include "test.h"

/// Erwartet einen Vektor und eine Zahl x.
/// Gibt zurück, wie viele Zahlen im Vektor vorkommen, die kleiner als x sind.
int count_less(std::vector<int> v, int x) {
  int result = 0;
  // TODO
  return result;
}

TEST_SUITE("task_count_less") {
  TEST_CASE("empty vector") {
    std::vector<int> v;
    CHECK(count_less(v, 0) == 0);
    CHECK(count_less(v, 1) == 0);
    CHECK(count_less(v, 42) == 0);
  }

  TEST_CASE("nonempty vector") {
    std::vector<int> v = {2, 1, 4, 5, 3};
    CHECK(count_less(v, 1) == 0);
    CHECK(count_less(v, 2) == 1);
    CHECK(count_less(v, 3) == 2);
    CHECK(count_less(v, 4) == 3);
    CHECK(count_less(v, 5) == 4);
  }
}
