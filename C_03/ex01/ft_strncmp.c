/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:23:25 by inightin          #+#    #+#             */
/*   Updated: 2021/09/06 16:18:04 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && *s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigne int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	return (0);
}
