/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:13:13 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/18 10:38:33 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int main()
{
	char src[] = "Hello, World!";
	printf("Source: %s\n", src);
	
	char dest[10];
	unsigned int copied_length;

	copied_length = ft_strlcpy(dest, src, 10);
	printf("Destination: %s\n", dest);
	printf("Copied lenght: %u", copied_length);

	return 0;
}
*/
