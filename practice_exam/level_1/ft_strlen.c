/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:49:02 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 17:42:14 by caide-so         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	int len = ft_strlen(str);
	printf("%d", len);
	return (0);
}
*/

/*
Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/
