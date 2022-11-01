/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:38 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:38 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while ((s1[i1] && s2[i2]) && (i1 < n && i2 < n))
	{
		while (ft_isalpha(s1[i1]) && ft_isalpha(s2[i2]))
		{
			if (ft_chrcmp(s1[i1], s2[i2]) != 0)
				return (0);
			i1++;
			i2++;
		}
		if (!ft_isalpha(s1[i1]) && s1[i1] && i1 < n)
			i1++;
		if (!ft_isalpha(s2[i2]) && s2[i2] && i2 < n)
			i2++;
	}
	if ((!s1[i1] || i1 == n) && (s2[i2] && i2 != n))
	{
		while (s2[i2] && i2 != n)
		{
			if (ft_isalpha(s2[i2]) != 0)
				return (0);
			i2++;
		}
	}
	if ((!s2[i2] || i2 == n) && (s1[i1] && i1 != n))
	{
		while (s1[i1] && i1 != n)
		{
			if (ft_isalpha(s1[i1]) != 0)
				return (0);
			i1++;
		}
	}
	return (1);
}

/* 
int	main(void)
{
	printf("%d",ft_strnequ("Y oo", "Yo  ", 3));
	return (0);
}
*/