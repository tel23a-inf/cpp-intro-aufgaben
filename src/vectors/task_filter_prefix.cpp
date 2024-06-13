#include <algorithm>
#include <string>
#include <vector>

#include "test.h"

/// Erwartet einen Vektor v und einen String s.
/// Liefert einen Vektor zurück, der nur die Strings aus v enthält, die mit s
/// beginnen.
std::vector<std::string> filter_prefix(std::vector<std::string> v,
                                       std::string s) {
  std::vector<std::string> result;
  // TODO
  return result;
}

TEST_SUITE("task_filter_prefix") {
  TEST_CASE("empty vector") {
    std::vector<std::string> v;
    std::vector<std::string> expected;
    CHECK(filter_prefix(v, "a") == expected);
    CHECK(filter_prefix(v, "b") == expected);
    CHECK(filter_prefix(v, "c") == expected);
  }

  TEST_CASE("no occurence") {
    std::vector<std::string> v{"abc", "ab", "acde", "e", "cdefg", "cdabc"};
    std::vector<std::string> expected;
    CHECK(filter_prefix(v, "x") == expected);
  }

  TEST_CASE("general case") {
    std::vector<std::string> v = {"abc", "ab", "acde", "e", "cdefg", "cdabc"};
    std::vector<std::string> expected_a = {"abc", "ab", "acde"};
    std::vector<std::string> expected_ab = {"abc", "ab"};
    std::vector<std::string> expected_c = {"cdefg", "cdabc"};
    std::vector<std::string> expected_cd = {"cdefg", "cdabc"};
    CHECK(filter_prefix(v, "a") == expected_a);
    CHECK(filter_prefix(v, "ab") == expected_ab);
    CHECK(filter_prefix(v, "c") == expected_c);
    CHECK(filter_prefix(v, "cd") == expected_cd);
  }
}
