/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:53:09 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 16:02:12 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *topf, ...)
{
	va_list ap;
	int ret;
	ret = 0;
	va_start(ap, topf);
	while (*topf && ret >= 0)
	{
		if(*topf == '%')
		{
			topf++;
			if (*topf == '%')
				ret += ft_putchar_pf('%');
			else if (*topf == 'c')
				ret += ft_putchar_pf(va_arg(ap, int));
			else if (*topf == 's')
				ret += ft_putstr_pf(va_arg(ap, char *));
			else if (*topf == 'd')
				ret += ft_putnbr_pf(va_arg(ap, int));
			topf++;
		}
		else
			ret += ft_putchar_str_pf((char **)&topf);
	}
	return (ret);
}