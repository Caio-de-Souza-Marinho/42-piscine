#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dup;
	int	len;
	int	i;

	if (min >= max)
		return ((void *)0);
	len = max - min;
	dup = (int *)malloc(len * 4);
	if (dup == ((void *)0))
		return ((void *)0);
	i = 0;
	while (i < len)
	{
		dup[i] = min + i;
		i++;
	}
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	int min1 = 1;
	int max1 = 5;
	int size1 = max1 - min1;
	int *dup1 = ft_range(min1, max1);
	for (int i = 0; i < size1; i++)
		printf("%d ", dup1[i]);
	printf("\n");

	int min2 = 0;
	int max2 = 10;
	int size2 = max2 - min2;
	int *dup2 = ft_range(min2, max2);
	for (int i = 0; i < size2; i++)
		printf("%d ", dup2[i]);
	printf("\n");

	int min3 = -5;
	int max3 = 5;
	int size3 = max3 - min3;
	int *dup3 = ft_range(min3, max3);
	for (int i = 0; i < size3; i++)
		printf("%d ", dup3[i]);
	printf("\n");

	int min4 = 10;
	int max4 = 10;
	int size4 = max4 - min4;
	int *dup4 = ft_range(min4, max4);
	for (int i = 0; i < size4; i++)
		printf("%d ", dup4[i]);
	printf("\n");

	int min5 = 20;
	int max5 = 10;
	int size5 = max5 - min5;
	int *dup5 = ft_range(min5, max5);
	for (int i = 0; i < size5; i++)
		printf("%d ", dup5[i]);
	printf("\n");

	return (0);
}
*/
