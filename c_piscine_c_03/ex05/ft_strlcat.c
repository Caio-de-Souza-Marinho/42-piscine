/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:00:25 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/21 17:51:41 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	ft_str_len(char *str)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (str[++i] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	copy_len;

	dest_len = ft_str_len(dest);
	src_len = ft_str_len(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	copy_len = size - dest_len - 1;
	if (copy_len > src_len)
		copy_len = src_len;
	ft_strncpy(dest + dest_len, src, copy_len);
	dest[dest_len + copy_len] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char dest[20] = "Hello";
	char *src = " World";
	unsigned int dest_size = 20;

	unsigned int result = ft_strlcat(dest, src, dest_size);

	printf("Destination after strlcat: '%s'\n", dest);
	printf("Total length of string tried to create: %u\n", result);
	return 0;
}
*/
