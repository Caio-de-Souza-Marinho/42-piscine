char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char string[] = "TESTE muito bom!";
	ft_strlowcase(string);
	printf("%s", string);
	return 0;
}
*/
