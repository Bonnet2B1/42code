/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:27:46 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/28 19:59:54 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int ret;

	ret = 0;
	if (!s)
	{
		ret += ft_putstr_pf("(null)");
		return (ret);
	}
	while (*s)
	{
		ret += write(1, s++, 1);
		if (ret < 0)
			return (-2147483648);
	}
	return (ret);
}