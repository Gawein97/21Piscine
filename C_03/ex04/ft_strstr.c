/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:49:26 by inightin          #+#    #+#             */
/*   Updated: 2021/09/06 15:52:51 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_compare(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
