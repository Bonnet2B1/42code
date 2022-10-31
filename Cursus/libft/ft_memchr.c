/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:32:15 by marvin            #+#    #+#             */
/*   Updated: 2022/09/03 10:32:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
La fonction memchr() examine les n premiers octets de la zone mémoire pointée par s 
à la recherche de la première occurrence de c. 
À la fois s et les octets de la zone mémoire pointée par s sont interprétés comme des unsigned char.
*/

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*char_s;

	char_s = (char *)s;
	while (*char_s && n)
	{
		if (*char_s == (char)c)
			return (char_s);
		char_s++;
		n--;
	}
	return (0);
}

/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "string abrakadabra";
	char c = ' ';
	unsigned int n = 7;
	printf("%s\n", (char*)memchr(s, c, n));
	printf("%s\n", (char*)ft_memchr(s, c, n));
	return (0);
}
*/