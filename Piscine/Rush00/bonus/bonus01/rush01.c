/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:22:16 by ggiboury          #+#    #+#             */
/*   Updated: 2022/11/01 10:48:01 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putline(int x, char beginning, char ending);
void	ft_putcolumn(int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		write(1, "Erreur saisie", 13);
	else if (y == 1)
		ft_putline(x, '/', '\\');
	else
	{
		ft_putline(x, '/', '\\');
		while (y > 1)
		{
			ft_putcolumn(x);
			y--;
		}
		ft_putline(x, '\\', '/');
	}
}

void	ft_putline(int x, char beginning, char ending)
{
	ft_putchar(beginning);
	if (x > 2)
	{
		while (x > 1)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar(ending);
	}
	ft_putchar('\n');
}

void	ft_putcolumn(int y)
{
	if (y > 1)
		ft_putchar('*');
	while (y > 1)
	{
		ft_putchar(' ');
		y--;
	}
	ft_putchar('*');
	ft_putchar('\n');
}
