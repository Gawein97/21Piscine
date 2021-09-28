/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:23:10 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 20:59:07 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*ft_make_digits(char **threes)
{
	int	*mas;
	int	len;

	len = threes_len(threes);
	mas = (int *)malloc(sizeof(int) * (len * 3 + len));
	if (mas == NULL)
		return (NULL);
	mas = ft_division(threes, mas);
	return (mas);
}

char	*create_dp(int size)
{
	int		i;
	char	*dp;

	i = 1;
	if (size <= 1)
	{
		dp = (char *)malloc(sizeof(char));
		dp[0] = '\0';
		return (dp);
	}
	dp = (char *)malloc(sizeof(char) * ((size - 1) * 3) + 2);
	if (dp == NULL)
		return (NULL);
	dp[0] = '1';
	while (i <= ((size - 1) * 3))
	{
		dp[i] = '0';
		i++;
	}
	dp[i] = '\0';
	return (dp);
}

void	print_result(t_dict *dict, int	*mas, int len, char *dp)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (mas[i] != -2)
	{
		if (mas[i] == -1)
		{
			printf_dp(dp, len, dict, flag);
			flag = 0;
		}
		else
		{
			printf_num(mas, i, len, dict);
			flag = 1;
		}
		i++;
		if (mas[i] != -2)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

int	ft_run(char *file_dict, char *number)
{
	t_dict	*dict;
	int		len;
	char	**threes;
	int		*mas;
	char	*dp;

	len = ft_dict_line_count(file_dict);
	dict = ft_run_parse(file_dict);
	if (number[0] == '\0')
	{
		printf_zero(len, dict);
		return (0);
	}
	threes = three_chars(number);
	dp = create_dp(threes_len(threes));
	mas = ft_make_digits(threes);
	print_result(dict, mas, len, dp);
	return (0);
}
