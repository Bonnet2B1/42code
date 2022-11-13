/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:29 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = ft_strlen(dest);
	j = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (!size)
		return (len_s + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size < len_d)
		return (len_s + size);
	else
		return (len_d + len_s);
}
