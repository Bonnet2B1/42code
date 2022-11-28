/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:30:30 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/28 21:00:18 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	adresslen(unsigned long long thing)
{
	int	len;

	len = 0;
	if (thing == 0)
		len++;
	while (thing > 0)
	{
		len++;
		thing /= 16;
	}
	return (len + 2);
}

int	ft_putadress_pf(unsigned long long thing)
{
	int		i;
	int		len;
	char	*base16;
	char	*adress;

	i = 0;
	len = adresslen(thing);
	base16 = "0123456789abcdef";
	adress = malloc(sizeof(char) * (len +1));
	if (!adress)
		return (-2147483648);
	adress[len] = '\0';
	while (len > 2)
	{
		i = thing % 16;
		thing /= 16;
		adress[--len] = base16[i];
	}
	adress[0] = '0';
	adress[1] = 'x';
	i = ft_putstr_pf(adress);
	free(adress);
	return (i);
}
