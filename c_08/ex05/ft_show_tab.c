#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
/*
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;

	if (!(dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_array;
	int	i;

	if(!(stock_array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_array[i].size = ft_strlen(av[i]);
		stock_array[i].str = av[i];
		stock_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_array[i].str = 0;
	return (stock_array);

}
*/
void	ft_putnbr(int nbr)
{
	long	num;
	char	c;

	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);

}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char *av[] = {"teste", "caio", "muito", "legal"};
	int len = 4;
	t_stock_str *stock_array = ft_strs_to_tab(len, av);
	ft_show_tab(stock_array);
	return (0);
}
*/
