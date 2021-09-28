/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:49:19 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 21:11:50 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*tmp;
	t_list	*list;
	int		i;

	i = 1;
	if (size <= 0)
		return ((void *)0);
	list = ft_create_elem(strs[0]);
	tmp = list;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
