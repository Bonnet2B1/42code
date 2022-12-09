/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:40:42 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/09 15:30:01 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count(long long nb)
{
	int	count;

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

static int	ft_functionputnbr_pf(long long nb)
{
	if (nb < 0)
	{
		if (ft_putchar_pf('-') < 0)
			return (-2147483648);
		nb *= -1;
	}
	if (nb >= 10)
	{
		if (ft_putnbr_pf(nb / 10) < 0)
			return (-2147483648);
		if (ft_putnbr_pf(nb % 10) < 0)
			return (-2147483648);
	}
	if (nb >= 0 && nb <= 9)
	{
		if (ft_putchar_pf(nb + 48) < 0)
			return (-2147483648);
	}
	return (1);
}

int	ft_putnbr_pf(long long nb)
{
	if (ft_functionputnbr_pf(nb) < 0)
		return (-2147483648);
	return (count(nb));
}
