#!/bin/bash
LIB_NAME="libft.a"
SRC_FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
for file in $SRC_FILES
do
	cc -Wall -Wextra -Werror -c $file
done
ar rcs $LIB_NAME *.o
rm -f *.o
