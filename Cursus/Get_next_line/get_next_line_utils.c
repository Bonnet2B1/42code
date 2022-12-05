/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:00:08 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/05 19:42:08 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if(!s1)
			return (NULL);
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


int	nextlen(const char *s, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\n' && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_substr(char const *s, int start, int len)
{
	char	*cpy;
	int		i;
	int		slen;

	slen = 0;
	i = 0;
	if (!s)
		return (NULL);
	while(s[slen])
		slen++;
	if (start >= slen)
		len = 0;
	if (slen - start < len)
		len = slen - start;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (len-- && s[start])
		cpy[i++] = s[start++];
	cpy[i] = '\0';
	return (cpy);
}
