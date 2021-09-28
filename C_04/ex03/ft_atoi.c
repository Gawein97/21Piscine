/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:04:05 by inightin          #+#    #+#             */
/*   Updated: 2021/09/08 17:53:47 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[i] >= 11 && str[i] <= 13) || str[i] == 9)
			i++;
		if (str[i] == 32 || str[i] == 10)
			i++;
		j++;
	}
	j = 0;
	while (str[j] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		j++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	return (1);
}

int	ft_ret(int sum, int minus)
{
	if (minus % 2 == 0)
		return (sum / 10);
	else
		return (-(sum / 10));
}

int	ft_atoi(char *str)
{
	int	sum;
	int	minus;

	sum = 0;
	minus = 0;
	if (!ft_check(str))
		return (0);
	while (*str)
	{
		if (sum > 0 && (*str < '0' || *str > '9'))
		{
			return (ft_ret(sum, minus));
		}
		if (*str >= '0' && *str <= '9')
			sum += (*str - '0');
		if (*str == '-')
			minus += 1;
		sum *= 10;
		str++;
	}
	return (ft_ret(sum, minus));
}
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("-2147483648"));
	return (0);
}
