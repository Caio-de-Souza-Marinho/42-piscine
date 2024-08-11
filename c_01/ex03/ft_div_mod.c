void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	tmpdiv;
	int	tmpmod;

	tmpdiv = a / b;
	tmpmod = a % b;
	*div = tmpdiv;
	*mod = tmpmod;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 4;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}
*/
