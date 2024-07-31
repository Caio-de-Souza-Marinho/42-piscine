/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:53:11 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/31 19:33:09 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (*argv[1] != '\0')
		{
			repeat = letter_count(*argv[1]);
			while (repeat)
			{
				write(1, argv[1], 1);
				repeat--;
			}
			argv[1]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
