/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:49:30 by inightin          #+#    #+#             */
/*   Updated: 2021/09/13 20:36:03 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <sys/errno.h>
# include <string.h>
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
void	ft_stdin(void);
#endif
