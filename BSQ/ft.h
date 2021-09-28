/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:49:30 by inightin          #+#    #+#             */
/*   Updated: 2021/09/22 17:33:48 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>
typedef struct s_values
{
	int		number;
	char	empty;
	char	obstacle;
	char	full;
}			t_values;
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_std_atoi(char *str);
char		*ft_strdup(char *src);
char		*ft_read_fline(char *map);
int			ft_str_line_len(char *map);
t_values	ft_argv_parse(char *fline);
char		**ft_map_parse(int line, int len, char *file);
int			ft_all_valid(char *fline, char *file, int len);
int			**ft_map_to_int(t_values values, int len, char **map);
int			*ft_biggest_square(int **newmap, int len, int h);
int			ft_map_symb_valid(char buff, char *symb);
void		ft_create_square(int *pos, char **mas, t_values values);
char		*ft_stdin(void);
int			ft_all_valid_stdin(char *fline, char *str, int len);
void		ft_start_stdin(void);
int			*ft_val_map(t_values values, int len, char **lines);
void		ft_print(char **lines, int value);
char		*ft_symb_valid(char *fline);
int			ft_map_valid(char *fline);
char		*ft_read_fline_stdin(char *str);
void		ft_destroy(void **array, int size);
void		set_free(void *ptr1, void *ptr2);
void		ft_putstr_error(char *str);
#endif
