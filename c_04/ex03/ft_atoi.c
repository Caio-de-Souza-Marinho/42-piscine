int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
	return (sign * res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// New test cases
	char str1[] = "   +42";
	int val1 = ft_atoi(str1);
	printf("Test 1: %d\n", val1); // Expected output: 42

	char str6[] = "   ---1234";
	int val6 = ft_atoi(str6);
	printf("Test 6: %d\n", val6); // Expected output: -1234

	char str7[] = "   0007a89";
	int val7 = ft_atoi(str7);
	printf("Test 7: %d\n", val7); // Expected output: 789

	char str8[] = "   +2147483647";
	int val8 = ft_atoi(str8);
	printf("Test 8: %d\n", val8); // Expected output: 2147483647

	char str9[] = "   -2147483648";
	int val9 = ft_atoi(str9);
	printf("Test 9: %d\n", val9); // Expected output: -2147483648

	char str10[] = "   -++++++--------4a2abc";
	int val10 = ft_atoi(str10);
	printf("Test 10: %d\n", val10); // Expected output: -42

	char str11[] = "   +-999xyz";
	int val11 = ft_atoi(str11);
	printf("Test 11: %d\n", val11); // Expected output: -999

	return 0;
}
*/
