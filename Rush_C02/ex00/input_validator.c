/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyarlat <inyarlat@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:18:00 by inyarlat          #+#    #+#             */
/*   Updated: 2021/09/19 20:36:36 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || \
	c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	input_validator(char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]) && str[i])
		i++;
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (-1);
	}
	return (1);
}

int	num_count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (is_space(str[i]) || str[i] == '0' || str[i] == '+')
		i++;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*initialize_array(char *str)
{
	char	*new_str;
	int		i;
	int		num_counter;

	i = 0;
	num_counter = num_count(str);
	new_str = (char *)malloc(sizeof(char) * (num_counter));
	if (new_str == NULL)
		return (NULL);
	while (i <= num_counter)
	{
		new_str[i] = '\0';
		i++;
	}
	return (new_str);
}

char	*input_check(char *str)
{
	char	*new_str;
	int		i;
	int		j;
	int		check_input;

	i = 0;
	j = 0;
	check_input = input_validator(str);
	new_str = initialize_array(str);
	if (check_input == 1)
	{
		while (str[i] && !(str[i] >= '1' && str[i] <= '9'))
			i++;
		while (str[i])
		{
			new_str[j] = str[i];
			j++;
			i++;
		}
		return (new_str);
	}
	else
		return (0);
}
