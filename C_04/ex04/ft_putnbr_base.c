/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:16:40 by inightin          #+#    #+#             */
/*   Updated: 2021/09/06 20:22:08 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_reverse(int a, int b, char *base)
{
	if (a == 0)
		return ;
	ft_reverse(a / b, b, base);
	ft_putchar(base[a % b]);
}

int	ft_repeat_symbol(char *base)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (base[i] != '\0')
	{
		while (base[j + 1] != '\0')
		{
			if (base[i] == base[j + 1])
				temp++;
			if (temp == 1)
				return (0);
			j++;
		}
		i++;
		j = i;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(base);
	if (base[0] == '\0')
		return ;
	if (ft_strlen(base) <= 1)
		return ;
	if (!ft_repeat_symbol(base))
		return ;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	ft_reverse(nbr, l, base);
}
