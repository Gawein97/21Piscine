/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:37:05 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 03:26:51 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
t_values	ft_argv_parse(char *fline)
{
	t_values	values;
	int			i;
	char		*nb;
	int			len;

	i = 0;
	len = 0;
	len = ft_strlen(fline) - 1;
	if (len < 1)
		exit(1);
	nb = (char *)malloc(sizeof(char) * ft_strlen(fline) + 1);
	if (nb == NULL)
		exit(1);
	while (i < (len - 3) && (fline[i] >= '0' && fline[i] <= '9'))
	{
		nb[i] = fline[i];
		i++;
	}
	nb[i] = '\0';
	values.number = ft_std_atoi(nb);
	values.empty = fline[i];
	values.obstacle = fline[i + 1];
	values.full = fline[i + 2];
	free(nb);
	return (values);
}
