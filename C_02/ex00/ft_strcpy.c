/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:43:49 by inightin          #+#    #+#             */
/*   Updated: 2021/09/04 15:06:51 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*buffer;

	buffer = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (buffer);
}
