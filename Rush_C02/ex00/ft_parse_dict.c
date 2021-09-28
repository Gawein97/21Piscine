/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:50:22 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 17:43:09 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup_val(char *src)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = NULL;
	i = 0;
	j = 0;
	ptr = malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (ptr != NULL)
	{
		while (*(src + i) != ':')
			i++;
		i++;
		while (*(src + i) == ' ')
			i++;
		while (*(src + i) != '\0')
		{
			*(ptr + j) = *(src + i);
			i++;
			j++;
		}
		*(ptr + j) = '\0';
	}
	return (ptr);
}

char	*ft_strdup_key(char *src)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = NULL;
	i = 0;
	j = 0;
	ptr = malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (ptr != NULL)
	{
		while ((*src + i) == ' ')
			i++;
		while ((*(src + i) != ':') && (*(src + i) != ' '))
		{
			*(ptr + j) = *(src + i);
			i++;
			j++;
		}
		*(ptr + j) = '\0';
	}
	return (ptr);
}

void	ft_fill_dict(char *buff, char *tmp, t_dict	*dict)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (*(buff + i) != '\0')
	{
		if (*(buff + i) == '\n')
		{
			*(tmp + k) = '\0';
			create_elem(dict, tmp, j);
			k = 0;
			j++;
			i++;
		}
		else
		{
			*(tmp + k) = *(buff + i);
			i++;
			k++;
		}
	}
	create_elem(dict, tmp, j);
}

t_dict	*ft_create_dict(char *buff, int elems, int size)
{
	t_dict	*dict;
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 0;
	j = 0;
	k = 0;
	dict = malloc(sizeof(t_dict) * elems);
	if (dict == NULL)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * size + 1);
	if (tmp == NULL)
		return (NULL);
	ft_fill_dict(buff, tmp, dict);
	free(tmp);
	return (dict);
}

t_dict	*ft_run_parse(char *file)
{
	t_dict	*dict;
	int		size;
	int		lines;
	char	*buff;

	size = ft_file_size(file);
	lines = ft_dict_line_count(file);
	buff = ft_read_all(file);
	dict = ft_create_dict(buff, lines, size);
	free(buff);
	return (dict);
}
