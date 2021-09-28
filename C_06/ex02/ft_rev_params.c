/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:15:46 by inightin          #+#    #+#             */
/*   Updated: 2021/09/08 21:18:55 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i != 1)
	{
		ft_putstr(argv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
