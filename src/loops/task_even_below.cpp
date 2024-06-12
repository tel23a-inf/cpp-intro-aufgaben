#include <vector>

#include "test.h"

/// Erwartet eine Zahl limit.
/// Liefert eine Liste mit allen geraden Zahlen, die kleiner als n sind.
std::vector<int> even_below(int limit) {
  std::vector<int> result;
  for (int i = 0; i < limit; i += 2) {
    result.push_back(i);
  }
  return result;
}

TEST_CASE("limit == 10") {
  CHECK(even_below(10) == std::vector<int>{0, 2, 4, 6, 8});
}
TEST_CASE("limit == 11") {
  CHECK(even_below(11) == std::vector<int>{0, 2, 4, 6, 8, 10});
}
TEST_CASE("limit == 100") {
  CHECK(even_below(100) ==
        std::vector<int>{0,  2,  4,  6,  8,  10, 12, 14, 16, 18, 20, 22, 24,
                         26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50,
                         52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76,
                         78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98});
}
