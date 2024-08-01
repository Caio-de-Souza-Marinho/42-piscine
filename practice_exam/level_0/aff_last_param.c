/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:23:59 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 17:27:09 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	argv_index;

	i = 0;
	argv_index = argc - 1;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (argv[argv_index][i] != '\0')
		{
			write(1, &argv[argv_index][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

/*
Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/
