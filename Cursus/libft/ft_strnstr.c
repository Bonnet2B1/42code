/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:39:23 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/23 19:35:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	ii;
	char	*haystack_notconst;

	if (!n && !haystack)
		return (NULL);
	haystack_notconst = (char *)haystack;
	i = 0;
	ii = 0;
	if (needle[ii] == '\0')
		return (haystack_notconst);
	while (haystack_notconst[i])
	{
		while (haystack_notconst[i + ii] == needle[ii]
			&& haystack_notconst[i + ii] && i + ii < n)
			ii++;
		if (!needle[ii])
			return (haystack_notconst + i);
		i++;
		ii = 0;
	}
	return (0);
}
