/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:59:46 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:58 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 0;
	while (nb != sqr * sqr && sqr < nb && sqr <= 46340)
		sqr++;
	if (nb == sqr * sqr)
		return (sqr);
	return (0);
}
