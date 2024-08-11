#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	num;
	char	c;

	num = nbr;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	c = num % 10 + '0';
	ft_putchar(c);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
