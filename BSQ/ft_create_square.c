/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:34:43 by inightin          #+#    #+#             */
/*   Updated: 2021/09/21 18:22:37 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_replace_all(char **mas, t_values values)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < values.number)
	{
		while (mas[i][j] != '\0')
		{
			if (mas[i][j] != values.obstacle)
				mas[i][j] = values.empty;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_max_one(char **mas, t_values values)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < values.number)
	{
		while (mas[i][j] != '\0')
		{
			if (mas[i][j] != values.obstacle)
			{
				mas[i][j] = values.full;
				return ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_create_square(int *pos, char **mas, t_values values)
{
	int	i;
	int	j;

	if (pos[0] == 1 || pos[0] == 0)
	{
		ft_max_one(mas, values);
		return ;
	}
	ft_replace_all(mas, values);
	i = pos[1] - (pos[0] - 1);
	j = pos[2] - (pos[0] - 1);
	while (i <= pos[1])
	{
		while (j <= pos[2])
		{
			mas[i][j] = values.full;
			j++;
		}
		j = pos[2] - (pos[0] - 1);
		i++;
	}
}
