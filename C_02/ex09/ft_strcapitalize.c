/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:54:04 by inightin          #+#    #+#             */
/*   Updated: 2021/09/04 19:02:05 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char l)
{
	if ((l < 65) || (l > 122))
		return (0);
	return (1);
}

int	ft_is_numeric(char c)
{
	if ((c < 48) || (c > 57))
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

char	ft_capitalize(char c)
{
	if ((c >= 97) && (c <= 122))
		c = c - 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		a = ft_is_numeric(str[i - 1]);
		if (ft_is_letter(str[i]) && !ft_is_letter(str[i - 1]) && !a)
		{
			str[i] = ft_capitalize(str[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
