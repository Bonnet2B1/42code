/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:49:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:35 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	unsigned int	i;
	unsigned int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
		i++;
	while (src[isrc] && isrc < nb)
	{
		dest[i] = src[isrc];
		i++;
		isrc++;
	}
	dest[i] = '\0';
	return (dest);
}
