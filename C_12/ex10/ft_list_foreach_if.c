/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:37:42 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 19:16:29 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
			(*f)(list->data);
		list = list->next;
	}
}
