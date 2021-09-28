/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:43:40 by inightin          #+#    #+#             */
/*   Updated: 2021/09/07 17:48:07 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
