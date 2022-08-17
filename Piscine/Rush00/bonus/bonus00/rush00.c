/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:36:55 by mbazirea          #+#    #+#             */
/*   Updated: 2022/07/17 11:55:39 by mbazirea         ###   ########.fr       */
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
		ft_putchar('o');
		ft_putchar('\n');
	}	
	if (x == 2)
	{
		ft_putchar('o');
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x > 2)
	{	
		ft_putchar('o');
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	milieu(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}	
	if (x == 2)
	{
		ft_putchar('|');
		ft_putchar('|');
		ft_putchar('\n');
	}
	if (x > 2)
	{	
		ft_putchar('|');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
}
