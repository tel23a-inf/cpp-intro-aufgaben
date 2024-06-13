#include "game.h"
#include "test.h"

/// Liefert die Wertungspunkte für das Gäste-Team.
/// Sieg: 3 Punkte, Unentschieden: 1 Punkt, Niederlage: 0 Punkte.
int Game::points_guest() {
  // TODO
  return 0;
}

TEST_CASE("points_guest") {
  SUBCASE("guest wins") {
    Game game{"A", "B", 1, 2};
    CHECK(game.points_guest() == 3);
  }

  SUBCASE("guest loses") {
    Game game{"A", "B", 2, 1};
    CHECK(game.points_guest() == 0);
  }

  SUBCASE("draw") {
    Game game{"A", "B", 2, 2};
    CHECK(game.points_guest() == 1);
  }
}
