/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:23:42 by edelarbr          #+#    #+#             */
/*   Updated: 2022/08/04 15:14:52 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	str = NULL;
	if (min >= max)
		return (0);
	str = malloc (sizeof(int) * (max - min));
	if (str == NULL)
		return (str);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}

int	main(void)
{
	printf("%d", ft_range(-2147483647, 2147483646));
	return (0);
}
