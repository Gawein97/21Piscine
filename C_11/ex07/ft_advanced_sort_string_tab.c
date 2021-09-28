/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:47:46 by inightin          #+#    #+#             */
/*   Updated: 2021/09/14 22:01:40 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		len;
	int		flag;
	char	*tmp;
	int		i;

	len = ft_tab_len(tab);
	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < len - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}
