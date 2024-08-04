
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	comb(int *arr, int index, int n, int next)
{
	if (index == n)
	{
		ft_put_comb(arr, n);
		return ;
	}
	while (next < 10)
	{
		arr[index] = next;
		comb(arr, index + 1, n, next + 1);
		next++;
	}
}

void	ft_print_combn(int n)
{
	int arr[n];
	comb(arr, 0, n, 0);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 3;
	ft_print_combn(n);
	return (0);
}
*/
