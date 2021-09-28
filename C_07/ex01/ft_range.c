/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:19:26 by inightin          #+#    #+#             */
/*   Updated: 2021/09/09 19:26:10 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = NULL;
	if (min >= max)
		return (arr);
	arr = malloc(sizeof(int) * (max - min));
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	return (arr);
}
