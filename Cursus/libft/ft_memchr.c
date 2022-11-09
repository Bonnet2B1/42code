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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s[] = "string abrakadabra";
// 	char c = ' ';
// 	(unsigned int) n = 7;
// 	printf("%s\n", (char*)memchr(s, c, n));
// 	printf("%s\n", (char*)ft_memchr(s, c, n));
// 	return (0);
// }
