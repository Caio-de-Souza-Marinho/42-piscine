/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:59:10 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/14 13:35:46 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	num;
	char	c;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = -nb;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	c = num % 10 + '0';
	ft_putchar(c);
}
