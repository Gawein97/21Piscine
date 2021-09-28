/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_line_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:35:16 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/21 18:39:53 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_str_line_len(char *map)
{
	char	buf;
	int		desc;
	int		len;
	int		ret;

	len = 0;
	buf = 0;
	desc = open(map, O_RDONLY);
	if (desc == -1)
		return (0);
	ret = read(desc, &buf, 1);
	if (ret == -1)
		return (0);
	while (ret && buf != '\n')
		ret = read(desc, &buf, 1);
	ret = read(desc, &buf, 1);
	while (ret && buf != '\n')
	{
		len++;
		ret = read(desc, &buf, 1);
	}
	if (close(desc) == -1)
		return (0);
	return (len);
}
