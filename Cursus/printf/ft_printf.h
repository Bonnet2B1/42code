/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:44:53 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/29 14:27:13 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *topf, ...);
int	ft_putchar_pf(int c);
int	ft_putstr_pf(char *s);
int	ft_putnbr_pf(long long int nb);
int	ft_putadress_pf(unsigned long long thing);
int	ft_putnbr_hex_min_pf(unsigned int nb);
int	ft_putnbr_hex_maj_pf(unsigned int nb);

#endif