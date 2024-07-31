/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:21:13 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/19 19:45:28 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && !(str[i - 1] >= 'a'
				&& str[i - 1] <= 'z') && !(str[i - 1] >= 'A'
				&& str[i - 1] <= 'Z') && !(str[i - 1] >= '0'
				&& str[i - 1] <= '9'))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return (str);
}
/*
int main()
{
	char string[] = "oi, tUdo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(string);
	printf("%s", string);
	return 0;
}
*/
