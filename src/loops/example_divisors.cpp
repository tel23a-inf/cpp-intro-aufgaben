#include <vector>

#include "test.h"

/// Erwartet eine Zahl n.
/// Liefert eine Liste mit allen Teilern von n.
std::vector<int> divisors(int n) {
  std::vector<int> result;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      result.push_back(i);
    }
  }
  return result;
}

TEST_CASE("n == 1") { CHECK(divisors(1) == std::vector<int>{1}); }
TEST_CASE("n == 2") { CHECK(divisors(2) == std::vector<int>{1, 2}); }
TEST_CASE("n == 3") { CHECK(divisors(3) == std::vector<int>{1, 3}); }
TEST_CASE("n == 4") { CHECK(divisors(4) == std::vector<int>{1, 2, 4}); }
TEST_CASE("n == 5") { CHECK(divisors(5) == std::vector<int>{1, 5}); }
TEST_CASE("n == 6") { CHECK(divisors(6) == std::vector<int>{1, 2, 3, 6}); }
TEST_CASE("n == 7") { CHECK(divisors(7) == std::vector<int>{1, 7}); }
TEST_CASE("n == 8") { CHECK(divisors(8) == std::vector<int>{1, 2, 4, 8}); }
TEST_CASE("n == 9") { CHECK(divisors(9) == std::vector<int>{1, 3, 9}); }
TEST_CASE("n == 10") { CHECK(divisors(10) == std::vector<int>{1, 2, 5, 10}); }
