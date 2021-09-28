/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:46:54 by inightin          #+#    #+#             */
/*   Updated: 2021/09/15 14:35:55 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_add(int x, int y)
{
	ft_putnbr(x + y);
	ft_putchar('\n');
}

void	ft_sub(int x, int y)
{
	ft_putnbr(x - y);
	ft_putchar('\n');
}

void	ft_mul(int x, int y)
{
	ft_putnbr(x * y);
	ft_putchar('\n');
}

void	ft_div(int x, int y)
{
	if (y == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	ft_putnbr(x / y);
	ft_putchar('\n');
}

void	ft_mod(int x, int y)
{
	if (y == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(x % y);
	ft_putchar('\n');
}
