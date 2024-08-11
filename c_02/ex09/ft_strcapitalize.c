char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' 
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char string1[] = "oi, tUdo Bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(string1);
	printf("%s\n", string1);

	char string2[] = "Teste do Caio para _ver +se ++tudo_Funciona";
	ft_strcapitalize(string2);
	printf("%s\n", string2);
	return 0;
}
*/
