/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:21:18 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/23 17:29:10 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_is_valid_base(char *base)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		ft_putnbr_base_rec(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!ft_is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_putnbr_base_rec(-(nbr / base_len), base, base_len);
			ft_putchar(base[-(nbr % base_len)]);
			return ;
		}
		nbr = -nbr;
	}
	ft_putnbr_base_rec(nbr, base, base_len);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(255, "01"); // Binary base
	ft_putchar('\n');
	ft_putnbr_base(-255, "0123456789ABCDEF"); // Hexadecimal base
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789"); // Decimal base
	ft_putchar('\n');
	ft_putnbr_base(255, "poneyvif"); // Octal base
	ft_putchar('\n');
	ft_putnbr_base(-255, "0123456789"); // Decimal base with negative number
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789"); // INT_MIN edge case
	ft_putchar('\n');

	// Binary base
	ft_putnbr_base(42, "01");
	ft_putchar('\n');

	// Hexadecimal base
	ft_putnbr_base(1234, "0123456789ABCDEF");
	ft_putchar('\n');

	// Decimal base
	ft_putnbr_base(9876, "0123456789");
	ft_putchar('\n');

	// Custom base (not octal in the traditional sense)
	ft_putnbr_base(255, "poneyvif");
	ft_putchar('\n');

	// Decimal base with negative number
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
    
	// INT_MIN edge case
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');

	// Additional use cases
	// Octal base
	ft_putnbr_base(128, "01234567");
	ft_putchar('\n');
	
	// Base 5
	ft_putnbr_base(312, "01234");
	ft_putchar('\n');

	// Base 6
	ft_putnbr_base(555, "012345");
	ft_putchar('\n');

	// Custom base with special characters
	ft_putnbr_base(999, "ABCDE");
	ft_putchar('\n');

	return 0;
}
*/
