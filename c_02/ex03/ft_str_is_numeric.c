int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char str[] = "135te";
	int ret = ft_str_is_numeric(str);
	printf("Return: %d", ret);
	return (0);
}
*/
