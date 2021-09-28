/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:44:50 by inightin          #+#    #+#             */
/*   Updated: 2021/09/07 15:57:46 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
