/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_str_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:30:24 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 15:23:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_str_pf(char **s)
{
	*s += 1;
	return (write(1, &*(*s -1), 1));
}

// int main(void)
// {
// 	char *str = "HelloWorld";
// 	ft_putchar_pf(&str);
// }