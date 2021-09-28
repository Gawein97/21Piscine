/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:10:52 by inightin          #+#    #+#             */
/*   Updated: 2021/09/17 22:36:10 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int
	   	(*cmpf)(void *, void *))
{
	t_btree	*rt;

	rt = ((void *)0);
	if (root)
	{
		rt = btree_search_item(root->left, data_ref, cmpf);
		if (rt)
			return (rt);
		if ((*cmpf)(root->item, data_ref) == 0)
			return (root);
		rt = btree_search_item(root->right, data_ref, cmpf);
		if (rt)
			return (rt);
	}
	return ((void *)0);
}
