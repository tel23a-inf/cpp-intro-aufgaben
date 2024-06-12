#include "game.h"
#include "test.h"

/// Erwartet einen Vektor aus Game-Objekten sowie den Namen eines Teams.
/// Liefert zurück, wie viele Punkte das Team gesammelt hat.
int add_points(std::vector<Game> games, std::string team) {
  int result = 0;
  for (Game g : games) {
    if (g.result() == team) {
      result += 3;
    }
    if (g.result() == "draw") {
      if (g.home == team || g.guest == team) {
        result++;
      }
    }
  }
  return result;
}

TEST_CASE("add_points") {
  auto game1 = Game{"Andorra", "Färöer", 2, 1};
  auto game2 = Game{"Andorra", "Liechtenstein", 1, 1};
  auto game3 = Game{"Andorra", "Malta", 1, 4};
  auto game4 = Game{"Färöer", "Liechtenstein", 6, 3};
  auto game5 = Game{"Färöer", "Malta", 4, 0};
  auto game6 = Game{"Liechtenstein", "Malta", 0, 0};

  SUBCASE("empty vector") {
    std::vector<Game> games;
    CHECK(add_points(games, "Andorra") == 0);
    CHECK(add_points(games, "Färöer") == 0);
    CHECK(add_points(games, "Liechstenstein") == 0);
    CHECK(add_points(games, "Malta") == 0);
  }

  SUBCASE("no occurence") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(add_points(games, "Australien") == 0);
  }

  SUBCASE("general case") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(add_points(games, "Andorra") == 4);
    CHECK(add_points(games, "Färöer") == 6);
    CHECK(add_points(games, "Liechtenstein") == 2);
    CHECK(add_points(games, "Malta") == 4);
  }
}
