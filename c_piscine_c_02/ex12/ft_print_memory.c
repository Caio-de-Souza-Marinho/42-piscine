/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:59:47 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/23 18:08:25 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, char ch)
{
	write(1, &c, 1);
	write(1, &ch, 1);
}

void	ft_print_address(void *addr)
{
	unsigned long	address;
	char			hex[16];
	int				i;
	int				j;

	address = (unsigned long)addr;
	i = 15;
	j = 0;
	while (j < 16)
		hex[j++] = '0';
	while (address > 0 && i >= 0)
	{
		hex[i--] = "0123456789abcdef"[address % 16];
		address /= 16;
	}
	j = 0;
	while (j < 16)
		ft_putchar(hex[j++], '\0');
}

void	ft_print_byte_hex(unsigned char byte)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[byte / 16], '\0');
	ft_putchar(hexa[byte % 16], '\0');
}

void	ft_print_content(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_byte_hex(ptr[i]);
		else
		{
			ft_putchar(' ', ' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ', '\0');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)addr;
	ft_print_address(addr);
	ft_putchar(':', '\0');
	ft_putchar(' ', '\0');
	ft_print_content(ptr, size);
	i = 0;
	while (i < 16)
	{
		if (i < size && ptr[i] >= 32 && ptr[i] <= 126)
			ft_putchar(ptr[i], '\0');
		else if (i < size)
			ft_putchar('.', '\0');
		else
			ft_putchar(' ', '\0');
		i++;
	}
	ft_putchar('\n', '\0');
	return (addr);
}

int	main(void)
{
	char	string0[] = "Bonjour les amin";
	char	string1[] = "ches\t\n\tc\a est fo";
	char	string2[] = "u\ttout\tce qu on ";
	char	string3[] = "peut faire avec\t";
	char	string4[] = "\n\tprint_memory\n\n";
	char	string5[] = "\n\tlol.lol\n \0";

	ft_print_memory(string0, 16);
	ft_print_memory(string1, 16);
	ft_print_memory(string2, 16);
	ft_print_memory(string3, 16);
	ft_print_memory(string4, 16);
	ft_print_memory(string5, 12);
	return (0);
}

