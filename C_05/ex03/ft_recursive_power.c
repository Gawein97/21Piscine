/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:18:21 by inightin          #+#    #+#             */
/*   Updated: 2021/09/08 20:23:51 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 1)
		return (1);
	if (nb == -1 && power < 0)
	{
		if (-power % 2 == 0)
			return (1);
		else
			return (-1);
	}
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
