#include "ft_stock_str.h"
#include <stdlib.h>

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
/*
#include <stdio.h>

int	main(void)
{
	char *av[] = {"teste", "caio", "muito", "legal"};
	int len = 4;
	t_stock_str *stock_array = ft_strs_to_tab(len, av);
	
	for (int i = 0; i < len; i++)
	{
		printf("Element %d:\n", i);
		printf(" size: %d\n", stock_array[i].size);
		printf(" str: %s\n", stock_array[i].str);
		printf(" copy: %s\n", stock_array[i].copy);
	}

	return (0);
}
*/
