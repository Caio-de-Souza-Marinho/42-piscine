int	ft_str_len(char *str)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (str[++i] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_str_len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src1[] = "Hello, World";
    	char dest1[30] = "";
    	ft_strcat(dest1, src1);
    	printf("Test 1 - Expected: 'Hello, World', Result: '%s'\n", dest1);

    	char src2[] = "";
    	char dest2[30] = "Teste - do Caio ";
    	ft_strcat(dest2, src2);
    	printf("Test 2 - Expected: 'Teste - do Caio ', Result: '%s'\n", dest2);

    	char src3[] = "";
    	char dest3[30] = "";
    	ft_strcat(dest3, src3);
    	printf("Test 3 - Expected: '', Result: '%s'\n", dest3);

    	char src4[] = " has enough space.";
    	char dest4[50] = "The destination array";
    	ft_strcat(dest4, src4);
    	printf("Test 4 - Expected: 'The destination array has
       	enough space.', Result: '%s'\n", dest4);

    	char src5[] = "This is a long string that will
       	overflow the destination buffer";
    	char dest5[20] = "Short buffer";
    	ft_strcat(dest5, src5);
    	printf("Test 5 - Expected: Buffer overflow, Result: '%s'\n", dest5);
	
	return (0);
}
*/
