/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyarlat <inyarlat@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:56:27 by inyarlat          #+#    #+#             */
/*   Updated: 2021/09/19 16:20:10 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen_threes(char *str)
{
	int	len;

	len = 0;
	if (*str == '0' && *(str + 1) == '\0')
		return (len);
	while (str[len])
		len++;
	return (len);
}

int	rank_count(int len)
{
	int	rank;

	rank = len / 3;
	if (len % 3 != 0)
		rank = len / 3 + 1;
	return (rank);
}

char	**write_to_matrix(char **matrix, char *str, int rank, int len)
{
	int	i;
	int	j;

	i = 0;
	if (len % 3 != 0 && *str)
	{
		matrix[0][0] = '0';
		if (len % 3 == 1 && *str)
			matrix[0][1] = '0';
		else if (len % 3 == 2 && *str)
			matrix[0][1] = *str++;
		matrix[0][2] = *str++;
		i = 1;
	}
	while ((i < rank) && *str)
	{
		j = 0;
		while (j < 3 && *str)
			matrix[i][j++] = *str++;
		i++;
	}
	return (matrix);
}

char	**three_chars(char *str)
{
	int		len;
	char	**matrix;
	int		i;
	int		rank;

	i = 0;
	len = ft_strlen_threes(str);
	rank = rank_count(len);
	matrix = (char **)malloc((rank + 1) * sizeof(char *));
	while (i < rank + 1)
		matrix[i++] = (char *)malloc(4 * sizeof(char));
	if (matrix == NULL)
		return (NULL);
	matrix = write_to_matrix(matrix, str, rank, len);
	matrix[rank] = NULL;
	return (matrix);
}
