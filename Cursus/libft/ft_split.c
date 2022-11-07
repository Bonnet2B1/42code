/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:42:20 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/04 09:42:20 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION : Alloue (avec malloc(3)) et retourne un tableau de chaines de
// caractères “fraiches” (toutes terminées par un ’\0’, le tableau
// également donc) résultant de la découpe de s selon le caractère
// c. Si l’allocation echoue, la fonction retourne NULL.
// EXEMPLE : ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
// le tableau ["salut", "les", "etudiants"].







////////////////////////////pas de moi !!!!!!!!!







// int	is_separator(char c, char *charset)
// {
// 	int	i;

// 	i = 0;
// 	while (charset[i])
// 	{
// 		if (c == charset[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int	wordcount(const char *str, char *charset)
// {
// 	int	i;
// 	int	wc;

// 	i = 0;
// 	wc = 0;
// 	while (str[i] != '\0')
// 	{
// 		while (str[i] && is_separator(str[i], charset))
// 			i++;
// 		if (str[i] != '\0')
// 			wc++;
// 		while (str[i] && !is_separator(str[i], charset))
// 			i++;
// 	}
// 	return (wc);
// }

// int	in_word_len(const char *str, char *charset, int i)
// {
// 	int	len;

// 	len = 0;
// 	while (str[i] && !(is_separator(str[i], charset)))
// 	{
// 		len++;
// 		i++;
// 	}
// 	return (len);
// }

// char	*putword(const char *str, char *charset, int i)
// {
// 	char	*rep;
// 	int		len;
// 	int		j;

// 	j = 0;
// 	len = in_word_len(str, charset, i);
// 	rep = malloc(sizeof(char) * (len + 1));
// 	while (str[i] && !(is_separator(str[i], charset)))
// 	{
// 		rep[j] = str[i];
// 		j++;
// 		i++;
// 	}
// 	rep[j] = '\0';
// 	return (rep);
// }

// char **ft_split(const char *str, char c)
// {
// 	char	**rep;
// 	char	charset[2];
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	charset[0] = c;
// 	charset[1] = '\0';
// 	rep = malloc(sizeof(char *) * (wordcount(str, charset) + 1));
// 	if (!(rep))
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		while (str[i] != '\0' && is_separator(str[i], charset))
// 			i++;
// 		if (str[i] != '\0')
// 			rep[j++] = putword(str, charset, i);
// 		while (str[i] && !is_separator(str[i], charset))
// 			i++;
// 	}
// 	rep[j] = 0;
// 	return (rep);
// }

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <stdlib.h>

// int main()
// {
// 	int i = 0;
// 	char **tab = ft_strsplit("*salut*les***etudiants*", '*');
// 	printf("Resultat voulu  : salut, 5 ; les, 3 ; etudiants, 9 ;\n");
// 	printf("Resultat obtenu : ");
// 	while (tab[i])
// 	{
// 		printf("%s, %lld ; ", tab[i], ft_strlen(tab[i]));
// 		i++;
// 	}
// 	return (0);
// }
#include "libft.h"	
#include <stdio.h>

int nextlen(const char *s, int i, char c)
{
	int len;

	len = 0;
	while(s[i] == c)
		i++;
	while(s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

int wordcount(const char *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i - 1] || i == 0)
	{
		if (i != 0 && s[i - 1] != c && (s[i] == c || !s[i]))
			count++;
		i++;
	}
	return (count);
}

char *nextword(const char *s, int *i, char c, int len)
{
	char *cpy;
	int y;

	y = 0;
	while(s[*i] == c)
		(*i)++;
	cpy = ft_calloc(len + 1, sizeof(char));
	if (!cpy)
		return (NULL);
	while (len)
	{
		cpy[y++] = s[(*i)++];
		len--;
	}	
	return (cpy);
}

void freeall(char **tab)
{
	int y;
	y = 0;
	while(tab[y])
		free(tab[y]);
		y++;
	free(tab);
}

char **ft_split(const char *s, char c)
{
	int i;
	int y;
	int word;
	char **tab;

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
		tab[y] = nextword(s, &i, c,nextlen(s, i, c));
		if (!tab[y])
		{
			freeall(tab);
			// y--;
			// while (y >= 0)
			// 	free(tab[y--]);
			// return NULL;


			// À voir avec emma qui a eu le mm probleme
		}
		y++;
	}
	tab[word] = NULL;
	return (tab);
}


// int main() 
// {
// 	int y = 0;
// 	char *s = "Hello!";
// 	char c = ' ';
// 	char **tab = ft_split(s, c);
// 	while(tab[y])
// 	{
// 		ft_putstr(tab[y]);
// 		ft_putchar('\n');
// 		y++;
// 	}  
// 	return 0;
// }