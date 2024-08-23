/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:11:33 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/25 16:56:20 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	comp(char *c, char *m)
{
	while (*c == *m && *c && *m)
	{
		c++;
		m++;
	}
	return (*c - *m);
}

void	putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}

void	swap(char **a, char **b)
{
	char	*s;

	s = *a;
	*a = *b;
	*b = s;
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (i < c - 1)
	{
		j = 1;
		while (j < c - 1)
		{
			if (comp(v[j], v[j + 1]) > 0)
				swap(&v[j], &v[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < c)
	{
		putstr(v[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
