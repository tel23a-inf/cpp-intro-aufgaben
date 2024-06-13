#include <vector>

#include "test.h"

/// Erwartet einen Vektor und einen String s.
/// Liefert die Position von s im Vektor zurück, falls s im Vektor vorkommt.
/// Liefet die Länge des Vektors zurück, falls s nicht vorkommt.
/// Bei mehrfachem Vorkommen wird die Position des ersten Vorkommens
/// zurückgegeben.
size_t find_string(std::vector<std::string> v, std::string s) {
  int result = 0;
  // TODO
  return v.size();
}

TEST_SUITE("task_find_string") {
  TEST_CASE("empty vector") {
    std::vector<std::string> v;
    CHECK(find_string(v, "a") == 0);
    CHECK(find_string(v, "b") == 0);
    CHECK(find_string(v, "c") == 0);
  }

  TEST_CASE("no occurence") {
    std::vector<std::string> v{"a", "b", "c", "d", "e"};
    CHECK(find_string(v, "x") == 5);
  }

  TEST_CASE("one occurence") {
    std::vector<std::string> v = {"a", "b", "c", "d", "e"};
    CHECK(find_string(v, "a") == 0);
  }

  TEST_CASE("multiple occurences") {
    std::vector<std::string> v = {"a", "b", "c", "d", "e",
                                  "a", "b", "c", "d", "e"};
    CHECK(find_string(v, "b") == 1);
  }
}
