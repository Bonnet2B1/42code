/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:16:31 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:31 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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