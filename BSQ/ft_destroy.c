/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:17:39 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 04:13:47 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_destroy(void **array, int size)
{
	int	y;

	y = 0;
	while (y < size)
	{
		free(array[y]);
		y++;
	}
	free(array);
}

void	set_free(void *ptr1, void *ptr2)
{
	free(ptr1);
	free(ptr2);
}
