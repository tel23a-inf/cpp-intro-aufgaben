#ifndef GAME_H
#define GAME_H

#include <algorithm>
#include <string>
#include <vector>

struct Game {
  std::string home;
  std::string guest;
  int home_score;
  int guest_score;

  int points_home();
  int points_guest();
  std::string result();
};

int count_wins(std::vector<Game>, std::string);
int count_draws(std::vector<Game>, std::string);
int add_points(std::vector<Game>, std::string);
int goal_diff(std::vector<Game>, std::string);
std::vector<std::string> table(std::vector<Game>, std::string);
bool contains(std::vector<std::string> vec, std::string str);
bool compare_teams(std::string, std::string, int, int, int, int);
std::vector<std::string> playing_teams(std::vector<Game>);

#endif
