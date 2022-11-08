/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:33:10 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/08 09:56:11 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int i;
	
	i = 0;
	if (n > ft_strlen(dst) - 1)
		n = ft_strlen(dst) - 1; 
	while (src[i] && dest[i + 1] && n--)
	{
		dest[i] = src[i++];
	}
	return (ft_strlen(dst));
}