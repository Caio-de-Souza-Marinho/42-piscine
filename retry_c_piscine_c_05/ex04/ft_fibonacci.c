/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:15:52 by caide-so          #+#    #+#             */
/*   Updated: 2024/07/25 15:52:02 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
#include <stdio.h>

int     main(void)
{
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
	int index = 5;
	int ret = ft_fibonacci(index);
	printf("%d\n", ret);  // Expected output: 5

	// Additional tests
	printf("%d\n", ft_fibonacci(0));  // Expected output: 0
	printf("%d\n", ft_fibonacci(1));  // Expected output: 1
	printf("%d\n", ft_fibonacci(10)); // Expected output: 55
	printf("%d\n", ft_fibonacci(-3)); // Expected output: -1 (error case)

	return (0);
}
*/
