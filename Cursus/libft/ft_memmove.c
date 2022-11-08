/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:16:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:39 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (char_dest < char_src)
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
		while (n--)
			char_dest[n] = char_src[n];
	return (char_dest);
}
