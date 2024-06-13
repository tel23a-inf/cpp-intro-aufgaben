#include "game.h"
#include "test.h"

/// Erwartet einen Vektor aus Game-Objekten sowie den Namen eines Teams.
/// Liefert zurück, wie oft das Team gewonnen hat.
int count_wins(std::vector<Game> games, std::string team) {
  int result = 0;
  // TODO
  return result;
}

TEST_CASE("count_wins") {
  auto game1 = Game{"Andorra", "Färöer", 2, 1};
  auto game2 = Game{"Andorra", "Liechtenstein", 1, 1};
  auto game3 = Game{"Andorra", "Malta", 1, 4};
  auto game4 = Game{"Färöer", "Liechtenstein", 6, 3};
  auto game5 = Game{"Färöer", "Malta", 4, 0};
  auto game6 = Game{"Liechtenstein", "Malta", 0, 0};

  SUBCASE("empty vector") {
    std::vector<Game> games;
    CHECK(count_wins(games, "Andorra") == 0);
    CHECK(count_wins(games, "Färöer") == 0);
    CHECK(count_wins(games, "Liechstenstein") == 0);
    CHECK(count_wins(games, "Malta") == 0);
  }

  SUBCASE("no occurence") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(count_wins(games, "Australien") == 0);
  }

  SUBCASE("general case") {
    std::vector<Game> games{game1, game2, game3, game4, game5, game6};
    CHECK(count_wins(games, "Andorra") == 1);
    CHECK(count_wins(games, "Färöer") == 2);
    CHECK(count_wins(games, "Liechtenstein") == 0);
    CHECK(count_wins(games, "Malta") == 1);
  }
}
