/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:59:01 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 14:46:48 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_std_atoi(char *str)
{
	int				i;
	int				number;

	i = 0;
	number = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += ((int)str[i] - '0');
		i++;
	}
	return (number);
}
