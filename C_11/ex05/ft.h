/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:49:30 by inightin          #+#    #+#             */
/*   Updated: 2021/09/15 14:04:32 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <unistd.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_add(int x, int y);
void	ft_mul(int x, int y);
void	ft_sub(int x, int y);
void	ft_div(int x, int y);
void	ft_mod(int x, int y);
int		ft_atoi(char *s);
#endif
