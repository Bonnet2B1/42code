/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:43 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:43 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*str_not_const;

	str_not_const = (char *)str;
	i = ft_strlen(str_not_const);
	while (i >= 0)
	{
		if (str_not_const[i] == c)
			return (&str_not_const[i]);
		i--;
	}
	return (0);
}
