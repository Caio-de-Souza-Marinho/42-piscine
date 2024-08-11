int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char string[] = "1234";

	int ret = ft_str_is_lowercase(string);
	printf("%d", ret);
	return 0;
}
*/
