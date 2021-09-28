/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:31:52 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 16:25:46 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*head;

	head = begin_list;
	while (head)
	{
		tmp = head->next;
		if (head->data)
			(*free_fct)(head->data);
		free(head);
		head = tmp;
	}
	begin_list = NULL;
}
