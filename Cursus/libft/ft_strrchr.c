/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:03:46 by marvin            #+#    #+#             */
/*   Updated: 2022/08/29 16:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*str_not_const;
	
	str_not_const = (char *)str;
	i = ft_strlen(str_not_const);
	while (i > 0)
	{
		if (str_not_const[i] == c)
			return (&str_not_const[i]);
		i--;
	}
	return (0);
}
