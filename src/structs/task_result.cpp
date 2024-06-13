#include "game.h"
#include "test.h"

/// Liefert den Namen des Teams, das das Spiel gewonnen hat.
/// Bei einem Unentschieden wird "draw" geliefert.
std::string Game::result() {
  // TODO
  return guest;
}

TEST_CASE("result") {
  SUBCASE("home wins") {
    Game game{"A", "B", 2, 1};
    CHECK(game.result() == "A");
  }

  SUBCASE("home loses") {
    Game game{"A", "B", 1, 2};
    CHECK(game.result() == "B");
  }

  SUBCASE("draw") {
    Game game{"A", "B", 2, 2};
    CHECK(game.result() == "draw");
  }
}
