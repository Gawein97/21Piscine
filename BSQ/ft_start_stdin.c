/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_stdin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:42:24 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 17:35:51 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_line_len_stdin(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_read_stdin_map(int line, char *str, char **map, int len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (k < line)
	{
		map[k] = (char *)malloc(sizeof(char) * len + 1);
		while (str[i] != '\n')
		{
			map[k][j] = str[i];
			j++;
			i++;
		}
		map[k][j] = '\0';
		j = 0;
		k++;
		i++;
	}
	return (map);
}

char	**ft_stdin_map_parse(int line, int len, char *str)
{
	char	**map;

	map = malloc(sizeof(char *) * line);
	if (map == NULL)
	{
		free(map);
		exit(1);
	}
	map = ft_read_stdin_map(line, str, map, len);
	return (map);
}

int	ft_run_stdin(char *str)
{
	char		*fline;
	int			len;
	t_values	values;
	char		**lines;
	int			*val_map;

	fline = ft_read_fline_stdin(str);
	if (fline == NULL)
		return (0);
	len = ft_line_len_stdin(str);
	if (len == 0)
		return (0);
	if (!ft_all_valid_stdin(fline, str, len))
		return (0);
	values = ft_argv_parse(fline);
	lines = ft_stdin_map_parse(values.number, len, str);
	val_map = ft_val_map(values, len, lines);
	ft_create_square(val_map, lines, values);
	ft_print(lines, values.number);
	ft_destroy((void **)lines, values.number);
	set_free((void *)fline, (void *)val_map);
	return (1);
}

void	ft_start_stdin(void)
{
	char	*str;

	str = ft_stdin();
	if (!ft_run_stdin(str))
		ft_putstr_error("map error\n");
	free(str);
}
