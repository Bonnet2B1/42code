/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:58:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:03 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_factorial(int nb)
{
	int	fct;
	int	i;

	fct = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
		fct = fct * i++;
	return (fct);
}
