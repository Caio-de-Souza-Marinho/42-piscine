/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:11:32 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/25 14:39:35 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;
	int	minus_sign;

	res = 0;
	sign = 1;
	i = 0;
	minus_sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
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

#include <stdio.h>

int	main(void)
{
	// New test cases
	char str1[] = "   +42";
	int val1 = ft_atoi(str1);
	printf("Test 1: %d\n", val1); // Expected output: 42

	char str2[] = "   --42";
	int val2 = ft_atoi(str2);
	printf("Test 2: %d\n", val2); // Expected output: 42

	char str3[] = "   +-+42";
	int val3 = ft_atoi(str3);
	printf("Test 3: %d\n", val3); // Expected output: -42

	char str4[] = "   -+42";
	int val4 = ft_atoi(str4);
	printf("Test 4: %d\n", val4); // Expected output: -42

	char str5[] = "   -+-+42";
	int val5 = ft_atoi(str5);
	printf("Test 5: %d\n", val5); // Expected output: 42

	char str6[] = "   ---1234";
	int val6 = ft_atoi(str6);
	printf("Test 6: %d\n", val6); // Expected output: -1234

	char str7[] = "   000789";
	int val7 = ft_atoi(str7);
	printf("Test 7: %d\n", val7); // Expected output: 789

	char str8[] = "   +2147483647";
	int val8 = ft_atoi(str8);
	printf("Test 8: %d\n", val8); // Expected output: 2147483647

	char str9[] = "   -2147483648";
	int val9 = ft_atoi(str9);
	printf("Test 9: %d\n", val9); // Expected output: -2147483648

	char str10[] = "   +-42abc";
	int val10 = ft_atoi(str10);
	printf("Test 10: %d\n", val10); // Expected output: -42

	char str11[] = "   ++-+--+999xyz";
	int val11 = ft_atoi(str11);
	printf("Test 11: %d\n", val11); // Expected output: -999

	return 0;
}

/*
#include <stdlib.h>

int	main(void)
{
	char *double_test = "98.45";
	char *int_test = "94";
	char *long_int_test = "1231231231321324";

	double double_result = atof(double_test);
	int int_result = atoi(int_test);
	long int long_int_result = atol(long_int_test);

	printf("double: %f\n", double_result);
	printf("int: %d\n", int_result);
	printf("long int: %ld\n", long_int_result);
	return (0);
}
*/
