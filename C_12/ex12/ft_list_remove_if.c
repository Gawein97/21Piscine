/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:41:25 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 20:55:31 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,	int
	   	(*cmp)(), void (*free_fct)(void *))
{
	t_list	*next;
	t_list	*head;
	t_list	*last;

	head = *begin_list;
	last = NULL;
	while (head)
	{
		next = head->next;
		if ((*cmp)(head->data, data_ref) == 0)
		{
			if (last)
				last->next = head->next;
			else
				*begin_list = head->next;
			(*free_fct)(head->data);
			free(head);
		}
		last = head;
		head = next;
	}
}
