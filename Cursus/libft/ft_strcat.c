/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:32:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/09/03 15:41:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
		i++;
	while (src[isrc])
	{
		dest[i] = src[isrc];
		i++;
		isrc++;
	}
	dest[i] = '\0';
	return (dest);
}
