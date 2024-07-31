/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:31:24 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 15:58:07 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[5] = {4, 1, 3, 6, 2};
	for(int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, 5);
	for(int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	return (0);
}
*/
