/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:31:10 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/27 13:36:52 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	c;

	i = 0;
	if (min >= max)
		return (NULL);
	c = max - min;
	arr = (int *)malloc(c * sizeof(int));
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
