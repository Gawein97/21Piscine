/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:57:21 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 21:05:39 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	if (list)
	{
		while (list->next)
		{
			list = list->next;
		}
	}
	return (list);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*last;

	last = ft_list_last(*begin_list1);
	last->next = begin_list2;
}
