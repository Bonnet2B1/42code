/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:22:06 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/13 17:12:15 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_alphabet(void);
int main()
	{
		ft_print_alphabet();
	}
void ft_print_alphabet(void)
{
	write(1, &"abcdefghijklmnopqrstuvwxyz", 26);
}
