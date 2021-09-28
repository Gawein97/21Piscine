/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:12:08 by inightin          #+#    #+#             */
/*   Updated: 2021/09/11 20:48:32 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H
# define ABS(value) ft_abs(value)
int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
#endif
