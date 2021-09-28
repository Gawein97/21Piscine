/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:10:47 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 20:01:30 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_dict_line_count(char *file)
{
	int		len;
	int		fd;
	int		ret;
	char	buff;

	len = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	ret = read(fd, &buff, 1);
	while (ret)
	{
		if (buff == '\0')
			break ;
		if (buff == '\n')
			len++;
		ret = read(fd, &buff, 1);
	}
	if (close(fd) == -1)
		return (-1);
	return (len);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_file_size(char *file)
{
	int		f_len;
	int		fd;
	int		ret;
	char	buff;

	f_len = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	ret = read(fd, &buff, 1);
	if (ret == -1)
		return (-1);
	while (ret)
	{
		f_len++;
		ret = read(fd, &buff, 1);
	}
	if (close(fd) == -1)
		return (-1);
	return (f_len);
}

char	*ft_read_all(char *file)
{
	int		buff_size;
	char	*buff;
	int		fd;
	int		ret;

	buff_size = ft_file_size(file);
	if (buff_size == -1)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	buff = (char *)malloc(sizeof(char) * (buff_size + 1));
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = read(fd, buff, buff_size - 1);
	buff[buff_size] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	return (buff);
}

void	create_elem(t_dict	*dict, char *tmp, int j)
{
	dict[j].key = ft_strdup_key(tmp);
	dict[j].val = ft_strdup_val(tmp);
	return ;
}
