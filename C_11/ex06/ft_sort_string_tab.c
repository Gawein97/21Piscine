/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:25:05 by inightin          #+#    #+#             */
/*   Updated: 2021/09/14 21:44:23 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}

int	ft_tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_sort(char **argv, int size)
{
	int		flag;
	char	*tmp;
	int		i;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	len;

	len = ft_tab_len(tab);
	ft_sort(tab, len);
}
