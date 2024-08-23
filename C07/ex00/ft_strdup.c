/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:38:56 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/26 23:56:06 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len(char *f)
{
	int	i;

	i = 0;
	while (f[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		r;

	i = 0;
	r = len(src);
	str = (char *)malloc(r * sizeof(char) + 1);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
