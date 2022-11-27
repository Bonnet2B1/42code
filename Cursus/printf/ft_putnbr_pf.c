/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:40:42 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 19:16:09 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count(int long long nb)
{
	int count;

	count = 0;
	if (nb <= 0)
	{
		count += 1;
		if (nb < 0)
			nb *= -1;
	}
	while (nb / 10)
	{
		nb /= 10;
		count++;
	}
	if (nb >= 1 && nb <= 9)
		count += 1;
	return (count);
}

static void ft_functionputnbr_pf(long long int nb)
{
	if (nb < 0)
	{
		ft_putchar_pf('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		if (nb / 10 > 0)
			ft_putnbr_pf(nb / 10);
		ft_putnbr_pf(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_pf(nb + 48);
}

int	ft_putnbr_pf(long long nb)
{
	ft_functionputnbr_pf(nb);
	return(count((long long)nb));
}

