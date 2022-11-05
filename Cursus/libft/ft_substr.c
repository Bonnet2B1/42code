/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:49 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:49 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if ((start + len >= slen) || !s)
		return (0);
	cpy = ft_strnew(len);
	
	while (len)
	{
		printf("%c", s[i]);
		cpy[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	return (cpy);
}

/* 
int	main(void)
{
	printf("Retour de ft_strsub : %s", ft_strsub("Hello World !", 7, 5));
}
*/
