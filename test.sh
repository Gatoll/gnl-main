#!/bin/bash

GNL_C="get_next_line.c"
GNL_UTILS_C="get_next_line_utils.c"
MAIN_C="main.c"

if [ "$1" == "bonus" ]; then
    GNL_C="get_next_line_bonus.c"
    GNL_UTILS_C="get_next_line_utils_bonus.c"
    MAIN_C="main_bonus.c"
fi

cc ${GNL_C} ${GNL_UTILS_C} ${MAIN_C} -o gnl_test

echo "Running test with ${GNL_C}, ${GNL_UTILS_C}, and ${MAIN_C}"
./gnl_test | cat -e

rm gnl_test
