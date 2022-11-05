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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	cpy = malloc(len, sizeof(char));
	if ((start + len >= slen) || !s || !cpy)
		return (0);
	
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
int	main(void)
{
	printf("Retour de ft_strsub : %s", ft_strsub("Hello World !", 7, 5));
}
*/
