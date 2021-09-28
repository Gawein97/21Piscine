/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:45:57 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 17:48:57 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	threes_len(char **threes)
{
	int	i;

	i = 0;
	while (threes[i] != NULL)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
