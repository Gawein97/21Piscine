/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:14:32 by inightin          #+#    #+#             */
/*   Updated: 2021/09/14 21:15:07 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 30

void	ft_errno(char *prog, char *name, char *msg)
{
	ft_putstr(prog);
	ft_putstr(": ");
	ft_putstr(name);
	ft_putstr(": ");
	ft_putstr(msg);
	ft_putchar('\n');
}

int	ft_check(char *param)
{
	if (param[0] == '-' && param[1] == '\0')
		return (1);
	if (param[0] == '-' && param[1] == '-' && param[2] == '\0')
		return (1);
	return (0);
}

int	ft_check_argc(int argc, char **av)
{
	int	i;
	int	fd;

	i = 1;
	while (i < argc)
	{
		if (ft_check(av[i]))
		{
			i++;
			continue ;
		}
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_errno(av[0], av[i], (char *)strerror(errno));
			return (0);
		}
		if (close(fd) == -1)
		{
			ft_errno(av[0], av[i], (char *)strerror(errno));
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_display(char *av, char *buff, int size)
{
	int	fd;
	int	ret;

	fd = open(av, O_RDONLY);
	ret = read(fd, buff, size);
	if (fd == -1)
	{
		ft_putstr((char *)strerror(errno));
		return (0);
	}
	while (ret)
	{
		buff[ret] = '\0';
		ft_putstr(buff);
		ret = read(fd, buff, size);
	}
	if (close(fd) == -1)
	{
		ft_putstr((char *)strerror(errno));
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	buff[BUF_SIZE + 1];
	int		i;

	if (!ft_check_argc(argc, argv))
		return (1);
	if (argc == 1)
		ft_stdin();
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_stdin();
		else if (argv[i][0] == '-' && argv[i][1] == '-' && argv[i][2] == '\0')
			ft_stdin();
		else
			ft_display(argv[i], buff, BUF_SIZE);
		i++;
	}
	return (0);
}
