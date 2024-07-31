/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:58:39 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 15:42:56 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	tmpdiv;
	int	tmpmod;

	tmpdiv = a / b;
	tmpmod = a % b;
	*div = tmpdiv;
	*mod = tmpmod;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 4;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}
*/
