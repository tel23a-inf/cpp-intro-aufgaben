#include "game.h"
#include "test.h"

/// Erwartet einen Vektor aus Game-Objekten.
/// Liefert einen Vector mit den Namen der Teams,
/// sortiert nach der Anzahl der Punkte, die sie gesammelt haben.
/// Bei Punktegleichstand wird nach Tordifferenz sortiert.
std::vector<std::string> table(std::vector<Game> games) {
  std::vector<std::string> teams = playing_teams(games);
  std::vector<int> points;
  std::vector<int> diffs;

  // TODO
  return teams;
}

/// Hilfsfuntion: Erwartet zwei Teams sowie deren aufsummierte Punkte und
/// Tordifferenzen.
/// Liefert true, wenn das erste Team in der Tabelle vor dem zweiten Team
/// steht, ansonsten false.
bool compare_teams(std::string team1, std::string team2, int points1,
                   int points2, int diff1, int diff2) {
  // TODO
  return false;
}

/// Hilfsfunktion: Erwartet einen Vector mit Strings sowie einen String.
/// Liefert true, wenn der String im Vector enthalten ist, und false sonst.
bool contains(std::vector<std::string> vec, std::string str) {
  // TODO
  return false;
}

/// Hilfsfunktion: Erwartet einen Vector mit Spielen.
/// Liefert einen Vector mit den Namen der Teams, die in den Spielen
/// vorkommen.
std::vector<std::string> playing_teams(std::vector<Game> games) {
  std::vector<std::string> result;
  // TODO
  return result;
}

TEST_CASE("table") {
  auto game1 = Game{"Andorra", "Färöer", 2, 1};
  auto game2 = Game{"Andorra", "Liechtenstein", 1, 1};
  auto game3 = Game{"Andorra", "Malta", 1, 4};
  auto game4 = Game{"Färöer", "Liechtenstein", 6, 3};
  auto game5 = Game{"Färöer", "Malta", 4, 0};
  auto game6 = Game{"Liechtenstein", "Malta", 0, 0};

  SUBCASE("general case") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    std::vector<std::string> expected{"Färöer", "Malta", "Andorra",
                                      "Liechtenstein"};
    CHECK(table(games) == expected);
  }
}
