/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:35:47 by marvin            #+#    #+#             */
/*   Updated: 2022/08/30 16:35:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*char_src;
	char		*char_dest;

	char_src = src;
	char_dest = dest;
	while (n)
	{
		*char_dest = *char_src;
		char_dest++;
		char_src++;
		n--;
	}
	return (dest);
}
