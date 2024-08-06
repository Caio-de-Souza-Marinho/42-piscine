/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:07:27 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/14 11:02:58 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cen, char dez, char uni)
{
	write(1, &cen, 1);
	write(1, &dez, 1);
	write(1, &uni, 1);
	if (cen != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	uni;
	char	dez;
	char	cen;

	cen = '0';
	while (cen <= '7')
	{
		dez = cen + 1;
		while (dez <= '8')
		{
			uni = dez + 1;
			while (uni <= '9')
			{
				ft_putchar(cen, dez, uni);
				uni++;
			}
			dez++;
		}
		cen++;
	}	
}
