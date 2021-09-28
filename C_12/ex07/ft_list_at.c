/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:28:22 by inightin          #+#    #+#             */
/*   Updated: 2021/09/16 17:09:09 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*elem;

	elem = begin_list;
	i = 0;
	if (!elem)
		return ((void *)0);
	if (nbr == 0)
		return (elem);
	while (i < nbr)
	{
		if (elem->next)
			elem = elem->next;
		else
			return ((void *)0);
		i++;
	}
	return (elem);
}
