/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:19:20 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 13:44:42 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_fizzbuzz()
{
	char	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz\n");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("buzz\n");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("fizz\n");
			i++;
		}
		//else if (i == 100)
		//	printf("buzz");
		printf("%d\n", i);
		i++;
	}
}

int	main(void)
{
	ft_fizzbuzz();
	return (0);
}
