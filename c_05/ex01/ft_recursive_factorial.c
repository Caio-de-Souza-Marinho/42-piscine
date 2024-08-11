int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 5;
	int fact = ft_recursive_factorial(n);
	printf("%d", fact);
	return (0);
}
*/
