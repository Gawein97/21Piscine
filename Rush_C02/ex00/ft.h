/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:49:30 by inightin          #+#    #+#             */
/*   Updated: 2021/09/19 20:51:29 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>
typedef struct s_dict
{
	char	*key;
	char	*val;
}	t_dict;
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_check_num(char *num);
int		ft_std_atoi(char *s);
int		ft_dict_line_count(char *file);
int		ft_strlen(char *str);
int		ft_file_size(char *file);
char	*ft_read_all(char *file);
t_dict	*ft_run_parse(char *file);
char	**three_chars(char *str);
void	create_elem(t_dict	*dict, char *tmp, int j);
char	*ft_strdup_key(char *src);
char	*ft_strdup_val(char *src);
int		threes_len(char **threes);
int		ft_strcmp(char *s1, char *s2);
char	*input_check(char *str);
int		ft_div_100(int digit, int *mas, int *i);
void	ft_div_10(int digit, int *mas, int *i);
int		*ft_division(char **threes, int *mas);
void	printf_num(int *mas, int i, int len, t_dict *dict);
void	printf_dp(char *dp, int len, t_dict *dict, int flag);
int		ft_run(char *file_dict, char *number);
void	printf_zero(int len, t_dict *dict);
#endif
