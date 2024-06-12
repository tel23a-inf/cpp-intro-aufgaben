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

  for (std::string t : teams) {
    points.push_back(add_points(games, t));
    diffs.push_back(goal_diff(games, t));
  }

  for (int i = 0; i < teams.size(); i++) {
    for (int j = i; j < teams.size() - 1; j++) {
      std::string t1 = teams[j];
      std::string t2 = teams[j + 1];
      int p1 = points[j];
      int p2 = points[j + 1];
      int d1 = diffs[j];
      int d2 = diffs[j + 1];
      if (compare_teams(t2, t1, p2, p1, d2, d1)) {
        std::swap(teams[j], teams[j + 1]);
        std::swap(points[j], points[j + 1]);
        std::swap(diffs[j], diffs[j + 1]);
      }
    }
  }
  return teams;
}

/// Hilfsfuntion: Erwartet zwei Teams sowie deren aufsummierte Punkte und
/// Tordifferenzen.
/// Liefert true, wenn das erste Team in der Tabelle vor dem zweiten Team
/// steht, ansonsten false.
bool compare_teams(std::string team1, std::string team2, int points1,
                   int points2, int diff1, int diff2) {
  if (points1 > points2) {
    return true;
  }
  if (points1 == points2) {
    return diff1 > diff2;
  }
  return false;
}

/// Hilfsfunktion: Erwartet einen Vector mit Strings sowie einen String.
/// Liefert true, wenn der String im Vector enthalten ist, und false sonst.
bool contains(std::vector<std::string> vec, std::string str) {
  for (std::string s : vec) {
    if (s == str) {
      return true;
    }
  }
  return false;
}

/// Hilfsfunktion: Erwartet einen Vector mit Spielen.
/// Liefert einen Vector mit den Namen der Teams, die in den Spielen
/// vorkommen.
std::vector<std::string> playing_teams(std::vector<Game> games) {
  std::vector<std::string> result;
  for (Game g : games) {
    if (!contains(result, g.home)) {
      result.push_back(g.home);
    }
    if (!contains(result, g.guest)) {
      result.push_back(g.guest);
    }
  }
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
