/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:26:21 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 00:46:31 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_new_str(char *str, char buffer)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(char) * (i + 2));
	if (new == NULL)
	{
		free(str);
		return (NULL);
	}
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = buffer;
	new[i + 1] = '\0';
	free(str);
	return (new);
}

char	*ft_stdin(void)
{
	char	buffer;
	int		ret;
	char	*str;

	str = malloc(sizeof(char));
	ret = read(0, &buffer, 1);
	if (ret == -1)
	{
		free(str);
		exit(1);
	}
	while (ret && buffer != '\0')
	{
		str = ft_new_str(str, buffer);
		ret = read(0, &buffer, 1);
	}
	return (str);
}
