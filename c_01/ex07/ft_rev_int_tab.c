void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}	
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[5] = {1, 1, 3, 4, 88};
	for(int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, 5);
	for(int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	return (0);
}
*/
