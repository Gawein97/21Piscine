/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:54:05 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 20:59:34 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_div_10(int digit, int *mas, int *i)
{
	int	j;

	j = *i;
	if (digit / 10 > 1)
	{
		mas[j] = (digit - (digit % 10));
		j++;
		digit %= 10;
		if (digit != 0)
		{
			mas[j] = digit;
			j++;
		}
	}
	else
	{
		mas[j] = digit;
		j++;
	}
	*i = j;
}

int	ft_div_100(int digit, int *mas, int *i)
{
	int	j;

	j = *i;
	if (digit / 100 > 0)
	{
		mas[j] = digit / 100;
		mas[j + 1] = 100;
		j += 2;
	}
	digit %= 100;
	*i = j;
	return (digit);
}

int	*ft_division(char **threes, int *mas)
{
	int	i;
	int	j;
	int	digit;

	i = 0;
	j = 0;
	digit = -1;
	while (threes[i] != NULL)
	{
		digit = ft_std_atoi(threes[i]);
		digit = ft_div_100(digit, mas, &j);
		if (digit == 0)
		{
			i++;
			mas[j] = -1;
			j++;
			continue ;
		}
		ft_div_10(digit, mas, &j);
		mas[j] = -1;
		i++;
		j++;
	}
	mas[j - 1] = -2;
	return (mas);
}

void	printf_num(int *mas, int i, int len, t_dict *dict)
{
	int	j;
	int	find;

	j = 0;
	find = 0;
	while (j < len)
	{
		if (mas[i] == ft_std_atoi(dict[j].key) && mas[i] != 0)
		{
			ft_putstr(dict[j].val);
			find = 1;
		}
		j++;
	}
	if (find == 0)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
}

void	printf_dp(char *dp, int len, t_dict *dict, int flag)
{
	int	i;
	int	l_dp;
	int	find;

	i = 0;
	find = 0;
	if (dp[0] == '\0')
		return ;
	l_dp = ft_strlen(dp);
	while (i < len)
	{
		if (ft_strcmp(dp, dict[i].key) == 0 && flag != 0)
		{
			ft_putstr(dict[i].val);
			find = 1;
			dp[l_dp - 3] = '\0';
			return ;
		}
		i++;
	}
	if (find == 0)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
}
