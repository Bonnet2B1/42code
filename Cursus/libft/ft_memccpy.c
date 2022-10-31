/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:41:37 by marvin            #+#    #+#             */
/*   Updated: 2022/08/30 17:41:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*char_src;
	char		*char_dest;

	char_src = src;
	char_dest = dest;
	while (n)
	{
		if (*char_src == c)
			return (char_dest + 1);
		*char_dest = *char_src;
		char_dest++;
		char_src++;
		n--;
	}
	return (0);
}

/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[15] = "destination";
	char	src[15] = "source";
	char	dst_ft[15] = "destination";
	char	src_ft[15] = "source";
	int	c = 'r';

	printf("Avant    memccpy : %s\n", dst);
	printf("Apres    memccpy : %s\n", (char *)memccpy(dst, src, c, 11));
	printf("Avant ft_memccpy : %s\n", dst_ft);
	printf("Apres ft_memccpy : %s\n", (char *)ft_memccpy(dst_ft, src_ft, c, 11));
	printf("dst contient     : %s\n", dst);
	printf("dst_ft contient  : %s\n", dst_ft);
	return (0);
}
*/
