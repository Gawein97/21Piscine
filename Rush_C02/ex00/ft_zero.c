/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:39:11 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 20:52:50 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	printf_zero( int len, t_dict *dict)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (dict[i].key[0] == '0')
		{
			ft_putstr(dict[i].val);
			ft_putchar('\n');
			return ;
		}
		i++;
	}
}
