/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:41:38 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/23 18:05:47 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return (len);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	int len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		i++;
	}
}

int main()
{
	char str[] = "\0Oi\tvoce esta bem?\0";
	ft_putstr_non_printable(str);
	return 0;
}

