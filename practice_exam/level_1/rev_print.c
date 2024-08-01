/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:52:17 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 17:47:39 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len] != '\0')
		{
			len++;
		}
		while (argv[1][len - 1] != '\0')
		{
			write(1, &argv[1][len - 1], 1);
			len--;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

/*
Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
