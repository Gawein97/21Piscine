/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:30:09 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 19:39:39 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_start_1(char **argv)
{
	char	*number;

	number = input_check(argv[1]);
	if (!number)
	{
		ft_putstr("Error\n");
		return ;
	}
	ft_run("numbers.dict", number);
	return ;
}

void	ft_start_2(char	**argv)
{
	char	*number;

	number = input_check(argv[2]);
	if (!number)
	{
		ft_putstr("Error\n");
		return ;
	}
	ft_run(argv[1], argv[2]);
	return ;
}

int	main(int argc, char **argv)
{
	(void) argv;
	if ((argc - 1) != 1 && (argc - 1) != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if ((argc - 1) == 1)
		ft_start_1(argv);
	if ((argc - 1) == 2)
		ft_start_2(argv);
	return (0);
}
