/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:30:05 by mbazirea          #+#    #+#             */
/*   Updated: 2022/07/16 10:23:39 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush (5, 3);
	ft_putchar ('\n');
	rush (5, 1);
	ft_putchar ('\n');
	rush (1, 1);
	ft_putchar ('\n');
	rush (1, 5);
	ft_putchar ('\n');
	rush (4, 4);
	ft_putchar ('\n');
	rush (2, 1);
	ft_putchar ('\n');
	rush (15, 98);
	ft_putchar ('\n');
}
