/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:44:14 by mbazirea          #+#    #+#             */
/*   Updated: 2022/07/17 20:05:08 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	haut(int x);
void	bas(int x);
void	milieu(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y == 1)
	{
		haut(x);
	}	
	if (y == 2)
	{
		haut(x);
		bas(x);
	}
	if (y > 2)
	{
		haut(x);
		while (i < y - 2)
		{
			milieu(x);
			i++;
		}
		bas(x);
	}
}

void	haut(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}	
	if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (x > 2)
	{	
		ft_putchar('A');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	bas(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}	
	if (x == 2)
	{
		ft_putchar('C');
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (x > 2)
	{	
		ft_putchar('C');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	milieu(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}	
	if (x == 2)
	{
		ft_putchar('B');
		ft_putchar('B');
		ft_putchar('\n');
	}
	if (x > 2)
	{	
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		ft_putchar('\n');
	}
}
