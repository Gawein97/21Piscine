/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:24:15 by inightin          #+#    #+#             */
/*   Updated: 2021/09/04 15:12:35 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*buffer;

	i = 0;
	buffer = dest;
	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	dest = 0;
	return (buffer);
}
