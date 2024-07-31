/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:52:11 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/27 14:52:49 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = 1;
	while (nb > 1)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	int fact = ft_iterative_factorial(nb);
	printf("%d", fact);
	return (0);
}
*/
