/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:34:31 by inightin          #+#    #+#             */
/*   Updated: 2021/09/09 18:22:35 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
