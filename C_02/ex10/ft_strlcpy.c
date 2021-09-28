/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:23:07 by inightin          #+#    #+#             */
/*   Updated: 2021/09/04 20:29:46 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	const char		*s;
	char			*e;

	d = dest;
	s = src;
	e = dest + size;
	while (*s != '\0' && d < e)
		*d++ = *s++;
	if (d < e)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s++ != '\0')
		;
	return ((unsigned int)(s - src - 1));
}
