#!/bin/sh
for file in ./*.c
do
    echo "Testing $file file..."
    gcc -Wall -Wextra -Werror -L../libft -lft $file
    ./a.out | grep FAIL
done
