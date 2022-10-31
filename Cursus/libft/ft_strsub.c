/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:35:23 by marvin            #+#    #+#             */
/*   Updated: 2022/09/08 10:35:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
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
		cpy[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	return (cpy);
}

/* 
int main()
{
	printf("Retour de ft_strsub : %s", ft_strsub("Hello World !", 7, 5));
}
*/
