/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:47:04 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/21 16:58:34 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return ((void *)0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "";
	char *result;

	result = ft_strstr(str, to_find);

	if (result != ((void *)0))
		printf("Found substring: %s\n", result);
	else
		printf("Substring not found.\n");	
	return (0);
}
*/
