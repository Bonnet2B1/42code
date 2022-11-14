/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:07:27 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/13 15:00:03 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_isprime(nb))
		nb++;
	return (nb);
}
