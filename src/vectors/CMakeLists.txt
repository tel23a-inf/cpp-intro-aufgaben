add_executable(example_count example_count.cpp ${TEST_MAIN_CPP})
add_test(example_count example_count)

add_executable(example_filter_less example_filter_less.cpp ${TEST_MAIN_CPP})
add_test(example_filter_less example_filter_less)

add_executable(task_count_less task_count_less.cpp ${TEST_MAIN_CPP})
add_test(task_count_less task_count_less)

add_executable(task_find_string task_find_string.cpp ${TEST_MAIN_CPP})
add_test(task_find_string task_find_string)

add_executable(task_filter_prefix task_filter_prefix.cpp ${TEST_MAIN_CPP})
add_test(task_filter_prefix task_filter_prefix)
