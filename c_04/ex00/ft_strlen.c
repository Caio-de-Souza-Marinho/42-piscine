int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	int len = ft_strlen(str);
	printf("%d", len);
	return (0);
}
*/
