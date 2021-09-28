/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:34:50 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/22 18:20:41 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*ft_val_map(t_values values, int len, char **lines)
{
	int	**int_map;
	int	*val;

	int_map = ft_map_to_int(values, len, lines);
	val = ft_biggest_square(int_map, len, values.number);
	ft_destroy((void **)int_map, values.number);
	return (val);
}

void	ft_print(char **lines, int value)
{
	int	i;

	i = 0;
	while (i < value)
	{
		ft_putstr(lines[i]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_run(char *argv)
{
	char		*fline;
	t_values	values;
	char		**lines;
	int			len;
	int			*val_map;

	len = 0;
	fline = ft_read_fline(argv);
	if (fline == NULL)
		return (0);
	len = ft_str_line_len(argv);
	if (len == 0)
		return (0);
	if (!ft_all_valid(fline, argv, len))
		return (0);
	values = ft_argv_parse(fline);
	lines = ft_map_parse(values.number, len, argv);
	val_map = ft_val_map(values, len, lines);
	ft_create_square(val_map, lines, values);
	ft_print(lines, values.number);
	ft_destroy((void **)lines, values.number);
	set_free((void *)fline, (void *)val_map);
	return (1);
}

void	ft_start_files(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_run(argv[i]))
		{
			ft_putstr_error("map error\n");
			if (i != argc - 1)
				ft_putchar('\n');
			i++;
			continue ;
		}
		i++;
		if (i != argc)
			ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	if ((argc - 1) > 0)
		ft_start_files(argc, argv);
	else
		ft_start_stdin();
	return (0);
}
