int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	 main(void)
{
	int nb = 4;
	int sqrt = ft_sqrt(nb);
	printf("%d", sqrt);
	return (0);
}
*/
