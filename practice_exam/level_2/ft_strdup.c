/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:11:12 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 18:30:39 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = '\0';
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
