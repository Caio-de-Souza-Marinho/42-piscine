/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:27:46 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/29 13:18:20 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*arr;
	int	i;
	int	j;

	j = 0;
	i = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(len * 4);
	*range = arr;
	if (arr == NULL)
		return (-1);
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	return (j);
}
/*
#include <stdio.h>

int	main(void)
{
	int *range;
	int size;
	int i;

	size = ft_ultimate_range(&range, 1, 40);
	for(i = 0; i < size; i++)
		printf("%d ", range[i]);
	printf("\n");
	printf("%d", size);
	return (0);
}
*/
