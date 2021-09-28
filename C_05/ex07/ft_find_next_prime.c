/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:24:23 by inightin          #+#    #+#             */
/*   Updated: 2021/09/08 16:30:14 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	d;

	d = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (nb == 2);
	while ((d * d <= nb) && (nb % d != 0))
		d += 2;
	return (d * d > nb);
}

int	ft_find_next_prime(int nb)
{
	int	b;

	b = nb;
	if (ft_is_prime(nb))
		return (nb);
	if (nb < 2)
		return (2);
	while (!ft_is_prime(b))
		b += 1;
	return (b);
}
