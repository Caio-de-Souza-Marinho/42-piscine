/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:54:13 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 15:44:47 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpa / tmpb;
	*b = tmpa % tmpb;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 4;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
*/
