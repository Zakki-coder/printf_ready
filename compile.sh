#!/bin/bash
#compile withe simple_test
mkdir -p test_results
gcc *.c ./libft/*.c -I./includes -I./libft/
./a.out
