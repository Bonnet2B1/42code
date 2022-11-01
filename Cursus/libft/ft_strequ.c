/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:27:21 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:27:21 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	t_strequ(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;

	i2 = 0;
	i1 = 0;
	while ((s1[i1] && s2[i2]))
	{
		while (ft_isalpha(s1[i1]) && ft_isalpha(s2[i2]))
		{
			if (ft_chrcmp(s1[i1], s2[i2]) != 0)
				return (0);
			i1++;
			i2++;
		}
		if (!ft_isalpha(s1[i1]) && s1[i1])
			i1++;
		if (!ft_isalpha(s2[i2]) && s2[i2])
			i2++;
	}
	if (!s1[i1] && s2[i2])
	{
		while (s2[i2])
		{
			if (ft_isalpha(s2[i2]) != 0)
				return (0);
			i2++;
		}
	}
	if (!s2[i2] && s1[i1])
	{
		while (s1[i1])
		{
			if (ft_isalpha(s1[i1]) != 0)
				return (0);
			i1++;
		}
	}
	return (1);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_strequ("Y oo", "Yo "));
	return (0);
}
*/