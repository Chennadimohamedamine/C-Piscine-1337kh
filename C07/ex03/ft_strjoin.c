/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:09 by mochenna          #+#    #+#             */
/*   Updated: 2023/10/02 15:53:16 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int    main(void)
{
    char    *tab[4];
    tab[0] = "amine";
    tab[1] = "1337";
    tab[2] = "khouribga";
    printf("%s", ft_strjoin(3, tab, " ,"));
    return (0);
}*/
