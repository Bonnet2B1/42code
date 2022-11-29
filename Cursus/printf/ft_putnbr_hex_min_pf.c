/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_min_pf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:16:43 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/29 14:27:40 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex_min(unsigned int nb)
{
	int	count;

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

static int	ft_functionputnbr_hex_min_pf(unsigned int nb)
{
	if (nb >= 16)
	{
		if (ft_functionputnbr_hex_min_pf(nb / 16) < 0)
			return (-2147483648);
		if (ft_functionputnbr_hex_min_pf(nb % 16) < 0)
			return (-2147483648);
	}
	else if (nb < 10)
	{
		if (ft_putchar_pf(nb + 48) < 0)
			return (-2147483648);
	}
	else
	{
		if (ft_putchar_pf(nb + 87) < 0)
			return (-2147483648);
	}
	return (1);
}

int	ft_putnbr_hex_min_pf(unsigned int nb)
{
	if (ft_functionputnbr_hex_min_pf(nb) < 0)
		return (-2147483648);
	return (count_hex_min(nb));
}
