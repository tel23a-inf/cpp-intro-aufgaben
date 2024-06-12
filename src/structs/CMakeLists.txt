add_executable(game
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    ${TEST_MAIN_CPP}
)

add_executable(task_count_wins 
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    task_count_wins.cpp
    ${TEST_MAIN_CPP}
)

add_executable(task_count_draws 
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    task_count_draws.cpp
    ${TEST_MAIN_CPP}
)

add_executable(task_add_points 
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    task_add_points.cpp
    ${TEST_MAIN_CPP}
)

add_executable(task_goal_diff 
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    task_goal_diff.cpp
    ${TEST_MAIN_CPP}
)

add_executable(task_table
    example_points_home.cpp
    task_points_guest.cpp
    task_result.cpp
    task_add_points.cpp
    task_goal_diff.cpp
    task_table.cpp
    ${TEST_MAIN_CPP}
)

add_test(example_game_points_home game --test-case=points_home)
add_test(task_game_points_guest game --test-case=points_guest)
add_test(task_game_result game --test-case=result)
add_test(task_game_count_wins task_count_wins)
add_test(task_game_count_draws task_count_draws)
add_test(task_game_add_points task_add_points)
add_test(task_game_goal_diff task_goal_diff)
add_test(task_game_table task_table)
