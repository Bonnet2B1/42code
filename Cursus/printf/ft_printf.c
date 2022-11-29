/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:53:09 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/29 14:57:25 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	selectfunction(char **topf, int ret, va_list ap)
{
	if (**topf == '%' && ret >= 0)
	{
		*topf++;
		if (**topf == '%')
			ret += ft_putchar_pf('%');
		else if (**topf == 'c')
			ret += ft_putchar_pf(va_arg(ap, int));
		else if (**topf == 's')
			ret += ft_putstr_pf(va_arg(ap, char *));
		else if (**topf == 'p')
			ret += ft_putadress_pf(va_arg(ap, unsigned long long));
		else if (**topf == 'd' || **topf == 'i')
			ret += ft_putnbr_pf(((long long)va_arg(ap, int)));
		else if (**topf == 'u')
			ret += ft_putnbr_pf(((long long)va_arg(ap, unsigned int)));
		else if (**topf == 'x')
			ret += ft_putnbr_hex_min_pf(va_arg(ap, unsigned int));
		else if (**topf == 'X')
			ret += ft_putnbr_hex_maj_pf(va_arg(ap, unsigned int));
	}
	else if (ret >= 0)
		ret += ft_putchar_pf(**topf);
	*topf++;
	return (ret);
}

int	ft_printf(const char **topf, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	va_start(ap, *topf);
	while (*topf && ret >= 0)
		ret += selectfunction((char *) &topf, ret, ap);
	if (ret < 0)
		return (-1);
	return (ret);
}
