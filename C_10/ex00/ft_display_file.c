/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:51:56 by inightin          #+#    #+#             */
/*   Updated: 2021/09/13 15:59:41 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#define BUF_SIZE 4096

int	ft_check_argc(int argc)
{
	if ((argc - 1) == 0)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if ((argc - 1) > 1)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buff[BUF_SIZE + 1];
	int		ret;

	fd = open(argv[1], O_RDONLY);
	if (!ft_check_argc(argc))
		return (1);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ret = read(fd, buff, BUF_SIZE);
	while (ret)
	{
		buff[ret] = '\0';
		ft_putstr(buff);
		ret = read(fd, buff, BUF_SIZE);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
