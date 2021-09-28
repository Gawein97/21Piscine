/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:56:07 by inightin          #+#    #+#             */
/*   Updated: 2021/09/02 21:16:43 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	tb[2];

	tb[0] = 0;
	tb[1] = 1;
	while (tb[0] <= 100)
	{
		tb[1] = tb[0] + 1;
		while (tb[1] <= 99)
		{
			ft_putchar(tb[0] / 10 + '0', tb[0] % 10 + '0');
			write(1, " ", 1);
			ft_putchar(tb[1] / 10 + '0', tb[1] % 10 + '0');
			if ((tb[0] / 10 + '0' != '9') || (tb[0] % 10 + '0' != '8'))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			tb[1]++;
		}
		tb[0]++;
	}
}
