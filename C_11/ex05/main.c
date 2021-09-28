/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:54:10 by inightin          #+#    #+#             */
/*   Updated: 2021/09/15 14:37:48 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	void	(*op[5])(int, int);

	op[0] = ft_add;
	op[1] = ft_sub;
	op[2] = ft_mul;
	op[3] = ft_div;
	op[4] = ft_mod;
	if (argc - 1 != 3)
		return (1);
	if (argv[2][0] == '+' && argv[2][1] == '\0')
		op[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '-' && argv[2][1] == '\0')
		op[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '*' && argv[2][1] == '\0')
		op[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '/' && argv[2][1] == '\0')
		op[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '%' && argv[2][1] == '\0')
		op[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
