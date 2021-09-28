/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:01:33 by inightin          #+#    #+#             */
/*   Updated: 2021/09/05 20:05:32 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*ptr;
	int		endsize;
	int		i;

	endsize = size - ft_strlen(dest) - 1;
	ptr = dest + ft_strlen(dest);
	i = 0;
	while (*src != '\0' && i < endsize)
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return ((unsigned int)(ft_strlen(dest) + 1));
}
