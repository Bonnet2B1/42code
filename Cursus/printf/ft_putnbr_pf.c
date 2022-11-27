/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:40:42 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 16:01:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count(int nb, int nbsave)
{
	int count;

	count = 0;
	if (!nb)
		return (-2147483648);
	while (nbsave / 10)
	{
		nbsave /= 10;
		count++;
	}
	if (nb < 0)
		return (count + 1);
	return (count);
}

int	ft_putnbr_pf(int nb)
{
	int nbsave;

	nbsave = nb;
	if (nb == -2147483648)
	{
		ft_putchar_pf('-');
		ft_putchar_pf('2');
		ft_putnbr_pf(147483648);
	}
	else if (nb < 0)
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
	return (count(nb, nbsave));
}
