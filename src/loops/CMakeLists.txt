add_executable(example_divisors example_divisors.cpp ${TEST_MAIN_CPP})
add_test(example_divisors example_divisors)

add_executable(example_multiples example_multiples.cpp ${TEST_MAIN_CPP})
add_test(example_multiples example_multiples)

add_executable(task_even_below task_even_below.cpp ${TEST_MAIN_CPP})
add_test(task_even_below task_even_below)

add_executable(task_repeat task_repeat.cpp ${TEST_MAIN_CPP})
add_test(task_repeat task_repeat)
