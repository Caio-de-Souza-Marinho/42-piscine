/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:57:06 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/24 14:05:57 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert_to_base(char *str, char *base, int base_len, int i)
{
	int	res;
	int	index;

	res = 0;
	index = ft_base_index(str[i], base);
	while (index != -1)
	{
		res = res * base_len + index;
		i++;
		index = ft_base_index(str[i], base);
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	i;
	int	base_len;

	if (!ft_is_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	res = ft_convert_to_base(str, base, base_len, i);
	return (sign * res);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "  -42";
	char base1[] = "0123456789";
	int val1 = ft_atoi_base(str1, base1);
	printf("%d\n", val1); // Expected output: -42

	char str2[] = "  1010";
	char base2[] = "01";
	int val2 = ft_atoi_base(str2, base2);
	printf("%d\n", val2); // Expected output: 10

	char str3[] = "  +2a";
	char base3[] = "0123456789abcdef";
	int val3 = ft_atoi_base(str3, base3);
	printf("%d\n", val3); // Expected output: 42

	char str4[] = "42";
	char base4[] = "012345677";
	int val4 = ft_atoi_base(str4, base4);
	printf("%d\n", val4); // Expected output: 0

	char str5[] = "  52";
	char base5[] = "01234567";
	int val5 = ft_atoi_base(str5, base5);
	printf("%d\n", val5); // Expected output: 42

	char str6[] = "  110";
	char base6[] = "012";
	int val6 = ft_atoi_base(str6, base6);
	printf("%d\n", val6); // Expected output: 12

	char str7[] = "42";
	char base7[] = "012345678+";
	int val7 = ft_atoi_base(str7, base7);
	printf("%d\n", val7); // Expected output: 0

	return 0;
}
*/
/*
int	ft_calc_res(char *str, int i)
{
	int	res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str)
{
	int	res;
	int	sign;
	int	i;
	int	minus_sign;

	res = 0;
	sign = 1;
	i = 0;
	minus_sign = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			minus_sign++;
		}
		i++;
	}
	if (minus_sign % 2 != 0)
		sign = -1;
	res = ft_calc_res(str, i);
	return (sign * res);
}
*/
