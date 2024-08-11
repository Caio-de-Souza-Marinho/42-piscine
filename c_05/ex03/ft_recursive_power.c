int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 2;
	int power = 3;
	int res = ft_recursive_power(nb, power);
	printf("%d", res);
	return (0);
}
*/
