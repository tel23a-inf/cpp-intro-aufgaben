#include "game.h"
#include "test.h"

/// Liefert die Wertungspunkte für das Heim-Team.
/// Sieg: 3 Punkte, Unentschieden: 1 Punkt, Niederlage: 0 Punkte.
int Game::points_home() {
  if (home_score > guest_score) {
    return 3;
  }
  if (home_score == guest_score) {
    return 1;
  }
  return 0;
}

TEST_CASE("points_home") {
  SUBCASE("home wins") {
    Game game{"A", "B", 2, 1};
    CHECK(game.points_home() == 3);
  }

  SUBCASE("home loses") {
    Game game{"A", "B", 1, 2};
    CHECK(game.points_home() == 0);
  }

  SUBCASE("draw") {
    Game game{"A", "B", 2, 2};
    CHECK(game.points_home() == 1);
  }
}
