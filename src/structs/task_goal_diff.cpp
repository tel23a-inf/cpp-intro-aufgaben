#include "game.h"
#include "test.h"

/// Erwartet einen Vektor aus Game-Objekten sowie den Namen eines Teams.
/// Liefert die Tordifferenz des Teams.
int goal_diff(std::vector<Game> games, std::string team) {
  int result = 0;
  // TODO
  return result;
}

TEST_CASE("goal_diff") {
  auto game1 = Game{"Andorra", "Färöer", 2, 1};
  auto game2 = Game{"Andorra", "Liechtenstein", 1, 1};
  auto game3 = Game{"Andorra", "Malta", 1, 4};
  auto game4 = Game{"Färöer", "Liechtenstein", 6, 3};
  auto game5 = Game{"Färöer", "Malta", 4, 0};
  auto game6 = Game{"Liechtenstein", "Malta", 0, 0};

  SUBCASE("empty vector") {
    std::vector<Game> games;
    CHECK(goal_diff(games, "Andorra") == 0);
    CHECK(goal_diff(games, "Färöer") == 0);
    CHECK(goal_diff(games, "Liechstenstein") == 0);
    CHECK(goal_diff(games, "Malta") == 0);
  }

  SUBCASE("no occurence") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(goal_diff(games, "Australien") == 0);
  }

  SUBCASE("general case") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(goal_diff(games, "Andorra") == -2);
    CHECK(goal_diff(games, "Färöer") == 6);
    CHECK(goal_diff(games, "Liechtenstein") == -3);
    CHECK(goal_diff(games, "Malta") == -1);
  }
}
