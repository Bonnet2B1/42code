/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:22:13 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/20 13:25:43 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	unite;
	int	dizaine;
	int	centaine;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine + 1;
		while (dizaine <= '8')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				write(1, &centaine, 1);
				write(1, &dizaine, 1);
				write(1, &unite, 1);
				if (centaine != '7' || dizaine != '8' || unite != '9')
					write(1, ", ", 2);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
