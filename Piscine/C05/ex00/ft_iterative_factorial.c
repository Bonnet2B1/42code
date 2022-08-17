/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:58:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/08/03 18:13:04 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
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
