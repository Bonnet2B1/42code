/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:46:59 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/01 10:47:41 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	*range = NULL;
	if (min >= max)
		return (-1);
	*range = malloc (sizeof(int) * (max - min));
	if (str == NULL)
		return (*range);
	while (min < max)
	{
		*range[i] = min;
		i++;
		min++;
	}
	return (*range);
}
