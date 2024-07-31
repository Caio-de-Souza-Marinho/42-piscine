/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:57:34 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/29 10:02:15 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(src) + 1;
	dup = (char *)malloc(len);
	if (dup == ((void *)0))
		return ((void *)0);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test1 = "Hello, world!";
	char *test2 = "";
	char *test3 = "A very very long string that exceeds
       	typical short string lengths for testing purposes.";
	char *test4 = "1234567890";
	char *test5 = "Special characters !@#$%^&*()_+";

	char *dup1 = ft_strdup(test1);
	char *dup2 = ft_strdup(test2);
	char *dup3 = ft_strdup(test3);
	char *dup4 = ft_strdup(test4);
	char *dup5 = ft_strdup(test5);

	printf("Original: %s\nDuplicated: %s\n\n", test1, dup1);
	printf("Original: %s\nDuplicated: %s\n\n", test2, dup2);
	printf("Original: %s\nDuplicated: %s\n\n", test3, dup3);
	printf("Original: %s\nDuplicated: %s\n\n", test4, dup4);
	printf("Original: %s\nDuplicated: %s\n\n", test5, dup5);
	
	return (0);
}
*/
