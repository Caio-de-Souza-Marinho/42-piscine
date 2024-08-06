/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:43:21 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/24 09:22:28 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "Hello, World!";
	printf("Source: %s\n", src);
	char dest[20] = {0};
	unsigned int n = 2;
	ft_strncpy(dest, src, n);
	printf("Destination: %s", dest);
	return 0;
}
*/
