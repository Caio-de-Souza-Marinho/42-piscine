/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:09:56 by caide-so          #+#    #+#             */
/*   Updated: 2024/08/01 17:41:26 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "Ola, Mundo!";
	char s2[] = "Hello, World!";
	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s", s1);
	return (0);
}
*/

/*
Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/
