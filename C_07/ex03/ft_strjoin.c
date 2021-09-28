/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:32:22 by inightin          #+#    #+#             */
/*   Updated: 2021/09/10 21:49:58 by inightin         ###   ########.fr       */
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

char	*ft_crt_ptr(int size, char **strs, char *sep)
{
	char	*str;
	int		s;
	int		i;

	s = 0;
	i = 0;
	str = NULL;
	while (i < size)
	{
		s += ft_strlen(strs[i]);
		i++;
	}
	s += ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * (s + 1));
	return (str);
}

void	ft_join(char *str, char *buf, int *k)
{
	int	j;
	int	s;

	j = 0;
	s = *k;
	while (buf[j] != '\0')
	{
		*(str + s) = buf[j];
		j++;
		s++;
	}
	*k = s;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*string;

	i = 0;
	k = 0;
	if (size == 0)
	{
		string = (char *)(malloc(sizeof(char)));
		*string = '\0';
		return (string);
	}
	string = ft_crt_ptr(size, strs, sep);
	if (string == NULL)
		return (string);
	while (i < size)
	{
		ft_join(string, strs[i], &k);
		if (i != size - 1)
			ft_join(string, sep, &k);
		i++;
	}
	*(string + k) = '\0';
	return (string);
}
