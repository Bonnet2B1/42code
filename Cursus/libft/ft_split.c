/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/11/04 09:42:20 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/04 09:42:20 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nextlen(const char *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

size_t	wordcount(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 1;
	count = 0;
	while (s[i - 1])
	{
		if (i != 0 && s[i - 1] != c && (s[i] == c || !s[i]))
			count++;
		i++;
	}
	return (count);
}

char	*nextword(const char *s, size_t *i, char c, size_t len)
{
	char	*cpy;
	size_t	y;

	y = 0;
	while (s[*i] == c)
		(*i)++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (len)
	{
		cpy[y++] = s[(*i)++];
		len--;
	}
	cpy[y] = '\0';
	return (cpy);
}

char	**freeall(char **tab, size_t indice)
{
	size_t	y;

	y = 0;
	while (y <= indice)
	{
		free(tab[y]);
		y++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	y;
	size_t	word;
	char	**tab;

	i = 0;
	y = 0;
	if (!s)
		return (NULL);
	word = wordcount(s, c);
	tab = malloc(sizeof(char *) * (word + 1));
	if (!tab)
		return (NULL);
	while (y < word)
	{
		tab[y] = nextword(s, &i, c, nextlen(s, i, c));
		if (!tab[y])
			return (freeall(tab, y));
		y++;
	}
	tab[word] = NULL;
	return (tab);
}
