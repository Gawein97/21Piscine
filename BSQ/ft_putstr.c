/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:02:35 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 17:33:16 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

void	ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(2, (str + i), 1);
		i++;
	}
}
