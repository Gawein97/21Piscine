/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:11:26 by inightin          #+#    #+#             */
/*   Updated: 2021/09/15 21:14:23 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*go;

	go = *begin_list;
	if (go)
	{
		while (go->next)
		{
			go = go->next;
		}
		elem = ft_create_elem(data);
		go->next = elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
