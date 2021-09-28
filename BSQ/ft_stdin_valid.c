/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:56:29 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 17:58:32 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_read_stdin(char *str, int len, int *count, char *symb)
{
	int		line_len;
	int		i;

	line_len = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			line_len++;
		else if (str[i] == '\n' && str[i] != '\0')
		{
			if (line_len != len)
				return (0);
			line_len = 0;
			*count = *count + 1;
		}
		if (!ft_map_symb_valid(str[i], symb))
			return (0);
		i++;
	}
	return (1);
}

int	ft_len_stdin_valid(char *str, int len, int num, char *symb)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (len == 0)
		return (0);
	if (!ft_read_stdin(str, len, &count, symb))
		return (0);
	if (count != num)
		return (0);
	return (1);
}

int	ft_all_valid_stdin(char *fline, char *str, int len)
{
	int		num;
	char	*symb;

	num = ft_map_valid(fline);
	if (num == 0)
	{
		free(fline);
		return (0);
	}
	symb = ft_symb_valid(fline);
	if (symb == NULL)
	{
		free(symb);
		return (0);
	}
	if (!ft_len_stdin_valid(str, len, num, symb))
	{
		set_free((void *)fline, (void *)symb);
		return (0);
	}
	free(symb);
	return (1);
}
