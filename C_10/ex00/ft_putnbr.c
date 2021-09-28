/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:33:46 by inightin          #+#    #+#             */
/*   Updated: 2021/09/13 14:14:16 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_reverse(int a)
{
	char	d;

	d = a % 10 + '0';
	if (a == 0)
		return ;
	ft_reverse(a / 10);
	ft_putchar(d);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar(nb + '0');
	ft_reverse(nb);
}
