/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:31:17 by inightin          #+#    #+#             */
/*   Updated: 2021/09/11 21:58:59 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_lens(int size, char **strs)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		s += ft_strlen(strs[i]);
		i++;
	}
	return (s);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	i = 0;
	ptr = malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (ptr != NULL)
	{
		while (*(src + i) != '\0')
		{
			*(ptr + i) = *(src + i);
			i++;
		}
		*(ptr + i) = '\0';
	}
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;
	int					size;

	i = 0;
	size = ft_lens(ac, av);
	tab = malloc(sizeof(tab) * size);
	if (tab == NULL)
		return (tab);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
