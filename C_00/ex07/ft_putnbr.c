/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:47:53 by inightin          #+#    #+#             */
/*   Updated: 2021/09/06 14:39:35 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

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
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar(nb + '0');
	ft_reverse(nb);
}
