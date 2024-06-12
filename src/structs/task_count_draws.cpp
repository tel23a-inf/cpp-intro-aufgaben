#include "game.h"
#include "test.h"

/// Erwartet einen Vektor aus Game-Objekten sowie den Namen eines Teams.
/// Liefert zurück, wie oft das Team unentschieden gespielt hat.
int count_draws(std::vector<Game> games, std::string team) {
  int result = 0;
  for (Game g : games) {
    if (((g.home == team) || (g.guest == team)) && (g.result() == "draw")) {
      result++;
    }
  }
  return result;
}

TEST_CASE("count_draws") {
  auto game1 = Game{"Andorra", "Färöer", 2, 1};
  auto game2 = Game{"Andorra", "Liechtenstein", 1, 1};
  auto game3 = Game{"Andorra", "Malta", 1, 4};
  auto game4 = Game{"Färöer", "Liechtenstein", 6, 3};
  auto game5 = Game{"Färöer", "Malta", 4, 0};
  auto game6 = Game{"Liechtenstein", "Malta", 0, 0};

  SUBCASE("empty vector") {
    std::vector<Game> games;
    CHECK(count_draws(games, "Andorra") == 0);
    CHECK(count_draws(games, "Färöer") == 0);
    CHECK(count_draws(games, "Liechstenstein") == 0);
    CHECK(count_draws(games, "Malta") == 0);
  }

  SUBCASE("no occurence") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(count_draws(games, "Australien") == 0);
  }

  SUBCASE("general case") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(count_draws(games, "Andorra") == 1);
    CHECK(count_draws(games, "Färöer") == 0);
    CHECK(count_draws(games, "Liechtenstein") == 2);
    CHECK(count_draws(games, "Malta") == 1);
  }
}
