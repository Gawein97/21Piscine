/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:39:36 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/21 16:25:30 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	**ft_map_to_int(t_values values, int len, char **map)
{
	int	i;
	int	j;
	int	**newmap;

	i = 0;
	j = 0;
	newmap = malloc(sizeof(int *) * values.number);
	if (newmap == NULL)
		exit(1);
	while (i < values.number)
	{
		newmap[i] = malloc(sizeof(int) * len);
		while (j < len)
		{
			if (map[i][j] == values.obstacle)
				newmap[i][j] = 0;
			else if (map[i][j] == values.empty || map[i][j] == values.full)
				newmap[i][j] = 1;
			j++;
		}
		j = 0;
		i++;
	}
	return (newmap);
}
