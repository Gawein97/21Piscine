/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest_square.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:53:23 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/21 16:19:40 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
int	ft_find_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a + 1);
	else if (b <= a && b <= c)
		return (b + 1);
	else
		return (c + 1);
}

void	ft_max(int i, int j, int *tab, int max)
{
	if (max > tab[0])
	{
		tab[0] = max;
		tab[1] = i;
		tab[2] = j;
	}
}

void	ft_compare(int i, int j, int *tab, int **newmap)
{
	int	max;

	max = 0;
	if (newmap[i][j] != 0 && (i == 0 || j == 0))
		newmap[i][j] = 1;
	else if (newmap[i][j] != 0)
	{
		max = ft_find_min(newmap[i - 1][j], newmap[i - 1][j - 1],
				newmap[i][j - 1]);
		newmap[i][j] = max;
		ft_max(i, j, tab, max);
	}
}

int	*ft_biggest_square(int **newmap, int len, int h)
{
	int	i;
	int	j;
	int	*tab;
	int	max;

	i = 0;
	j = 0;
	max = 0;
	tab = malloc(sizeof(int) * 3);
	if (tab == NULL)
		exit(1);
	tab[0] = 0;
	while (i < h)
	{
		while (j < len)
		{
			ft_compare(i, j, tab, newmap);
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
