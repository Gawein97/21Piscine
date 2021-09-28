/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_symb_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:35:09 by inightin          #+#    #+#             */
/*   Updated: 2021/09/21 14:37:26 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_map_symb_valid(char buff, char *symb)
{
	if ((buff != symb[0]) && (buff != symb[1]) && (buff != symb[2])
		&& (buff != '\n'))
	{
		return (0);
	}
	return (1);
}
