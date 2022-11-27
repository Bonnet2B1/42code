/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:37:53 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 18:22:38 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char *str = "World";
	printf("\nRetour de ft_printf : %d\n", ft_printf("Pourcent : %%\nRandom   : Hello\nString   : %s\nChar     : %c\nAdresse  : %p\nInt      : %d",str , '!', str, -123));
	printf("\nRetour de ft_printf : %d\n", ft_printf("%d", 10));
}