/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:18:56 by inightin          #+#    #+#             */
/*   Updated: 2021/09/15 19:16:10 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list)
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
