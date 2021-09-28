/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:11:09 by inightin          #+#    #+#             */
/*   Updated: 2021/09/14 15:18:17 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*rtab;

	i = 0;
	rtab = malloc(sizeof(int) * length);
	while (i < length)
	{
		rtab[i] = (*f)(tab[i]);
		i++;
	}
	return (rtab);
}
