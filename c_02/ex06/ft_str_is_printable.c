int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char string[] = "Hello, World!\n";
	int ret = ft_str_is_printable(string);
	printf("%d", ret);
	return 0;
}
*/
