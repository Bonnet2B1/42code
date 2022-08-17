/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:36:26 by mbazirea          #+#    #+#             */
/*   Updated: 2022/07/16 10:33:26 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	hautetbas(int x);
void	milieu(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y == 1)
	{
		hautetbas(x);
	}	
	if (y == 2)
	{
		hautetbas(x);
		hautetbas(x);
	}
	if (y > 2)
	{
		hautetbas(x);
		while (i < y - 2)
		{
			milieu(x);
			i++;
		}
		hautetbas(x);
	}
}

void	hautetbas(int x)
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
