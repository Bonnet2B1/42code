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
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	if(start >= slen)
		start = slen;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (len-- && s[start])
		cpy[i++] = s[start++];
	cpy[i] = '\0';
	return (cpy);
}

/* 
int	main(void)
{
	printf("Retour de ft_strsub : %s", ft_strsub("Hello World !", 7, 5));
}
*/
