/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:04:30 by marvin            #+#    #+#             */
/*   Updated: 2022/09/07 11:04:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i1 = 0;
	size_t i2 = 0;

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
				return 0;
			i2++;
		}	
	}
	if (!s2[i2] && s1[i1])
	{
		while (s1[i1])
		{
			if (ft_isalpha(s1[i1]) != 0)
				return 0;
			i1++;
		}
	}
	return (1);
}

/* 
#include <stdio.h>

int main()
{
	printf("%d",ft_strequ("Y oo", "Yo "));
	return 0;
}
*/