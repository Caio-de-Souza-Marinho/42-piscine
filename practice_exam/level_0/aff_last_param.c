/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:23:59 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/31 13:06:25 by caide-so         ###   ########.fr       */
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
