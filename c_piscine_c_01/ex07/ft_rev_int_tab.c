/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:23:22 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/30 15:54:40 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int tab[4] = {1, 1, 3, 4};
	for(int i = 0; i < 4; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, 4);
	for(int i = 0; i < 4; i++)
		printf("%d ", tab[i]);
	return (0);
}
*/
