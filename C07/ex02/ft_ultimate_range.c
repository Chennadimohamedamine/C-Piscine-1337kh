/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:35:46 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/27 14:38:20 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	c;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = max - min;
	arr = (int *)malloc(c * sizeof(int));
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (c);
}
