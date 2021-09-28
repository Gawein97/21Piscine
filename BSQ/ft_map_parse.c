/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:37:06 by inightin          #+#    #+#             */
/*   Updated: 2021/09/20 19:38:03 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_read_map(int line, int fd, char **map, int len)
{
	int		i;
	int		j;
	int		ret;
	char	buff;

	i = 0;
	j = 0;
	ret = 0;
	ret = read(fd, &buff, 1);
	while (i < line)
	{
		map[i] = (char *)malloc(sizeof(char) * len + 1);
		while (buff != '\n')
		{
			map[i][j] = buff;
			ret = read(fd, &buff, 1);
			j++;
		}
		map[i][j] = '\0';
		j = 0;
		i++;
		ret = read(fd, &buff, 1);
	}
	return (map);
}

char	**ft_map_parse(int line, int len, char *file)
{
	char	buff;
	char	**map;
	int		fd;
	int		ret;

	map = malloc(sizeof(char *) * line);
	if (map == NULL)
		exit(1);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = read(fd, &buff, 1);
	if (ret == -1)
		return (NULL);
	while (buff != '\n')
		ret = read(fd, &buff, 1);
	map = ft_read_map(line, fd, map, len);
	if (close(fd) == -1)
		return (NULL);
	return (map);
}
