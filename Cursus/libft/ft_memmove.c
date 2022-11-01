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
	const char	*char_src;
	char		*char_dest;
	char		prov_src[10];
	size_t		i;

	i = 0;
	char_src = src;
	char_dest = dest;
	while (char_src[i])
	{
		prov_src[i] = char_src[i];
		i++;
	}
	i = 0;
	while (n)
	{
		*char_dest = prov_src[i];
		char_dest++;
		i++;
		n--;
	}
	return (dest);
}

/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[40] = "cette_phrase_se_chevauche";
	char ft_str[40] = "cette_phrase_se_chevauche";
	int n = 25;
	printf("memmove renvoie    : %s\n", (char *)memmove(str + 8, str + 3, n));
	printf("ft_memmove renvoie : %s\n", (char *)ft_memmove(ft_str + 8, ft_str
				+ 3, n));
	return (0);
}
*/