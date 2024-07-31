/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:34:43 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/21 12:54:18 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "This is the way";
	char s2[] = "This is tae way.";
	unsigned int n = 10;
	int ret = ft_strncmp(s1, s2, n);
	printf("%d", ret);
	return (0);
}
*/
