/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:27:46 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/07 19:06:15 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
	{
		if (ft_putstr_pf("(null)") < 0)
			return (-2147483648);
		return (6);
	}
	while (*s)
	{
		ret += write(1, s++, 1);
		if (ret == -1)
			return (-2147483648);
	}
	return (ret);
}
