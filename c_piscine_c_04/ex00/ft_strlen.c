/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:34:37 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/22 10:50:01 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
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
