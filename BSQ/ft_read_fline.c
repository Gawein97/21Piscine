/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:35:16 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/22 18:19:48 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_first(char *map, int len)
{
	int		ret;
	int		fd;
	char	*first;

	first = malloc(sizeof(char) * len + 1);
	if (first == NULL)
		exit(1);
	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = read(fd, first, len);
	if (ret == -1)
		return (NULL);
	first[len] = '\0';
	if (close(fd) == -1)
		return (NULL);
	if (first[0] == '\n' || first[0] == '\0')
	{
		free(first);
		return (NULL);
	}
	return (first);
}

char	*ft_read_fline(char *map)
{
	char	buf;
	int		desc;
	int		len;
	int		ret;
	char	*first;

	len = 0;
	buf = 0;
	desc = open(map, O_RDONLY);
	if (desc == -1)
		return (NULL);
	ret = read(desc, &buf, 1);
	if (ret == -1)
		return (NULL);
	len++;
	while (ret && buf != '\n')
	{
		ret = read(desc, &buf, 1);
		len++;
	}
	if (close(desc) == -1)
		return (NULL);
	first = ft_get_first(map, len);
	return (first);
}

char	*ft_read_fline_stdin(char *str)
{
	int		i;
	char	*fline;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0' || (str[i] == '\n' && i == 0))
		return (NULL);
	fline = malloc(sizeof(char) * i + 2);
	if (fline == NULL)
	{
		free(str);
		free(fline);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\n')
	{
		fline[i] = str[i];
		i++;
	}
	fline[i] = str[i];
	fline[i + 1] = '\0';
	return (fline);
}
