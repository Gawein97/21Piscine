/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:06:29 by inightin          #+#    #+#             */
/*   Updated: 2021/09/04 17:10:38 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char l)
{
	if ((l < 65) || (l > 122))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_letter(str[i]))
			if (str[i] < 97)
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
