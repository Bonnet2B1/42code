/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:39:23 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/15 16:06:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		ii;
	char	*str_not_const;

	str_not_const = (char *)str;
	i = 0;
	ii = 0;
	if (!to_find[ii])
		return (str_not_const);
	while (str_not_const[i])
	{
		while (str_not_const[i + ii] == to_find[ii] && str_not_const[i + ii])
			ii++;
		if (to_find[ii] == '\0')
			return (str_not_const + i);
		i++;
		ii = 0;
	}
	return (0);
}