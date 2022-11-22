/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:33:47 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
