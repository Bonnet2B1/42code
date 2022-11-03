/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:02 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:02 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*char_s;

	char_s = (char *)s;
	if (c > 127) 
		return (NULL);
	if (c == '\0')
	{
		return (&char_s[ft_strlen(s)]);
	}
	i = 0;
	while (char_s[i])
	{
		if (char_s[i] == c)
			return (&char_s[i]);
		i++;
	}
	return (0);
}
