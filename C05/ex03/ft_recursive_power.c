/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:30:15 by mochenna          #+#    #+#             */
/*   Updated: 2023/09/24 12:38:28 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = 1;
	if (power > 0)
		r = (nb * ft_recursive_power(nb, power - 1));
	return (r);
}
