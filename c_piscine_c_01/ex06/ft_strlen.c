/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:01:46 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 15:50:02 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	int res = ft_strlen(str);
	printf("%d", res);
	return (0);
}
*/
