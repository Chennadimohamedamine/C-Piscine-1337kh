/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:08:24 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/24 12:22:09 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	r = nb;
	while (i != power)
	{
		nb *= r;
		i++;
	}
	return (nb);
}
