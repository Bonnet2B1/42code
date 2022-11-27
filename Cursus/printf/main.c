/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:37:53 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/27 19:53:17 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	ft_printf("\nRetour de ft_printf : %d\n", ft_printf("%%%%"));
	printf("\nRetour de ft_printf : %d\n", printf("%%%%"));
}