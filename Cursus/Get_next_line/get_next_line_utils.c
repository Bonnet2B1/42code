/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:00:08 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/10 19:13:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i++] = '\0';
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s1)
		return (ft_strdup(s2));
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

	if(!s || i < 0)
		return (0);
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
	if (!s || !len)
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
