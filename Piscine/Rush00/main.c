/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:30:05 by mbazirea          #+#    #+#             */
/*   Updated: 2022/07/18 14:14:19 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush (2, 2);
	ft_putchar ('\n');
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
	rush (15, 20);
	ft_putchar ('\n');
}
