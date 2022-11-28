/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_min_pf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:16:43 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/28 20:10:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_hex_min(unsigned int nb)
{
	int count;

	count = 0;
	if (!nb)
		count += 1;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

static void ft_functionputnbr_hex_min_pf(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_functionputnbr_hex_min_pf(nb / 16);
		ft_functionputnbr_hex_min_pf(nb % 16);
	}
	else if (nb < 10)
		ft_putchar_pf(nb + 48);
	else
		if (ft_putchar_pf(nb + 87) < 0)
			return 
}

int	ft_putnbr_hex_min_pf(unsigned int nb)
{
	ft_functionputnbr_hex_min_pf(nb);
	return (count_hex_min(nb));
}