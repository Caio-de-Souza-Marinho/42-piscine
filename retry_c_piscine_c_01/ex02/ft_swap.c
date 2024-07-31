/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp@org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:54:59 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 16:43:11 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int a = 4;
	int b = 2;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}

