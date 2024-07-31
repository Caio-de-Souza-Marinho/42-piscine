/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:57:34 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/27 15:10:53 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	i = 0;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 2;
	int power = 3;
	int res = ft_iterative_power(nb, power);
	printf("%d", res);
	return (0);
}
*/
