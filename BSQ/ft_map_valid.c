/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:06:00 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 17:55:36 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_map_valid(char *fline)
{
	char	*number;
	int		i;
	int		len;
	int		nb;

	i = 0;
	len = ft_strlen(fline) - 1;
	if (len < 1)
		return (0);
	number = (char *)malloc(sizeof(char) * (ft_strlen(fline) + 1));
	if (number == NULL)
		exit(1);
	while (i < (len - 3) && (fline[i] >= '0' && fline[i] <= '9'))
	{
		number[i] = fline[i];
		i++;
	}
	if (number[0] == '\0' || fline[i + 3] != '\n')
	{
		free(number);
		return (0);
	}
	nb = ft_std_atoi(number);
	free(number);
	return (nb);
}

char	*ft_symb_valid(char *fline)
{
	int		i;
	char	*symb;
	int		len;

	i = 0;
	len = ft_strlen(fline) - 1;
	if (len < 1)
		return (NULL);
	symb = (char *)malloc(sizeof(char) * 4);
	if (symb == NULL)
		exit(1);
	symb[0] = fline[len - 3];
	symb[1] = fline[len - 2];
	symb[2] = fline[len - 1];
	symb[3] = '\0';
	if (symb[0] == symb[1] || symb[0] == symb[2] || symb[1] == symb[2])
	{	
		set_free((void *)fline, (void *)symb);
		return (NULL);
	}
	return (symb);
}

int	ft_read_file(int fd, int len, int *count, char *symb)
{
	int		ret;
	char	buff;
	int		line_len;

	line_len = 0;
	ret = 0;
	ret = read(fd, &buff, 1);
	while (ret && buff != '\0')
	{
		if (buff != '\n')
			line_len++;
		else if (buff == '\n' && buff != '\0')
		{
			if (line_len != len)
				return (0);
			line_len = 0;
			*count = *count + 1;
		}
		if (!ft_map_symb_valid(buff, symb))
			return (0);
		ret = read(fd, &buff, 1);
	}
	return (1);
}

int	ft_len_valid(char *file, int len, int num, char *symb)
{
	int		fd;
	int		count;
	int		ret;
	char	buff;

	count = 0;
	if (len == 0)
		return (0);
	fd = open(file, O_RDONLY);
	ret = read(fd, &buff, 1);
	while (ret && buff != '\n')
		ret = read(fd, &buff, 1);
	if (!ft_read_file(fd, len, &count, symb))
		return (0);
	if (count != num)
		return (0);
	if (close(fd) == -1)
		exit(1);
	return (1);
}

int	ft_all_valid(char *fline, char *file, int len)
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
	if (!ft_len_valid(file, len, num, symb))
	{
		set_free((void *)fline, (void *)symb);
		return (0);
	}
	free(symb);
	return (1);
}
