/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_maj_pf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:45:14 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/28 19:58:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_hex_maj(unsigned int nb)
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

static void ft_functionputnbr_hex_maj_pf(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_functionputnbr_hex_maj_pf(nb / 16);
		ft_functionputnbr_hex_maj_pf(nb % 16);
	}
	else if (nb < 10)
		ft_putchar_pf(nb + 48);
	else
		ft_putchar_pf(nb + 55);
}

int	ft_putnbr_hex_maj_pf(unsigned int nb)
{
	ft_functionputnbr_hex_maj_pf(nb);
	return (count_hex_maj(nb));
}