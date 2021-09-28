/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inightin <inightin@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:57:08 by inightin          #+#    #+#             */
/*   Updated: 2021/09/05 19:59:41 by inightin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(char st, char md, char ed, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		if (i == 0)
		{
			ft_putchar(st);
			i++;
		}
		else if (i == w - 1)
		{
			ft_putchar(ed);
			i++;
		}
		else
		{
			ft_putchar(md);
			i++;
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			ft_printline('/', '*', '\\', x);
			i++;
		}
		else if (i == y - 1)
		{
			ft_printline('\\', '*', '/', x);
			i++;
		}
		else
		{
			ft_printline('*', ' ', '*', x);
			i++;
		}
	}
}
