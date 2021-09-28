/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:29:21 by inightin          #+#    #+#             */
/*   Updated: 2021/09/13 20:36:54 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(void)
{
	char	buffer;
	int		ret;

	ret = read(STDIN_FILENO, &buffer, 1);
	if (ret == -1)
		ft_putstr((char *)strerror(errno));
	while (ret)
	{
		write(1, &buffer, 1);
		ret = read(STDIN_FILENO, &buffer, 1);
	}
}
