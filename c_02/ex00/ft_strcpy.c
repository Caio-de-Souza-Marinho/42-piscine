char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Hello, World!";
	printf("Source: %s\n", src);
	char dest[1];
	ft_strcpy(dest, src);
	printf("Destination: %s\n", dest);
	return 0;
}
*/
