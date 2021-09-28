/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:38:04 by inightin          #+#    #+#             */
/*   Updated: 2021/09/07 12:45:53 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	write(1, &base[a % b], 1);
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

int	ft_atoi(char *str)
{
	int	sum;
	int	minus;

	sum = 0;
	minus = 0;
	while (*str)
	{
		if (sum > 0 && (*str < '0' || *str > '9'))
		{
			if (minus % 2 == 0)
				return (sum / 10);
			else
				return (-(sum / 10));
		}
		if (*str >= '0' && *str <= '9')
			sum += (*str - '0');
		if (*str == '-')
			minus += 1;
		sum *= 10;
		str++;
	}
	if (minus % 2 == 0)
		return (sum / 10);
	else
		return (-(sum / 10));
}

void	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	l;
	int	number;

	i = 0;
	number = ft_atoi(str);
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
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	ft_reverse(number, l, base);
}
