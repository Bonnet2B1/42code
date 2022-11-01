/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:45 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:45 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION : Alloue (avec malloc(3)) et retourne un tableau de chaines de
// caractères “fraiches” (toutes terminées par un ’\0’, le tableau
// également donc) résultant de la découpe de s selon le caractère
// c. Si l’allocation echoue, la fonction retourne NULL.
// EXEMPLE : ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
// le tableau ["salut", "les", "etudiants"].

#include "libft.h"
#include <stdlib.h>

int	count_words(char *str, char c)
{
	int	i;
	int	nbr_of_wrd;

	i = 0;
	nbr_of_wrd = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			nbr_of_wrd++;
		i++;
	}
	return (nbr_of_wrd);
}

int	max_len(char *str, char c)
{
	int	i;
	int	len;
	int	max_len;

	i = 0;
	len = 0;
	max_len = 0;
	while (str[i])
	{
		if (str[i] != c)
			len++;
		if (len == max_len)
			len = max_len;
		if (str[i] == c)
			len = 0;
		i++;
	}
	return (max_len);
}

int	next_word_len(char *str, int i, char c)
{
	int	next_word_len;

	next_word_len = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		next_word_len++;
		i++;
	}
	return (next_word_len);
}

int	go_next_word(char *str, char c, int i)
{
	while (str[i] == c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		itab;
	int		jtab;
	int		nxtwrdlen;
	char	**tab;

	i = 0;
	itab = 0;
	jtab = 0;
	nxtwrdlen = 0;
	tab = (char **)malloc(count_words((char *)s, c));
	while (s[i] && jtab < count_words((char *)s, c))
	{
		nxtwrdlen = next_word_len((char *)s, i, c);
		tab[jtab] = (char *)malloc(next_word_len((char *)s, i, c) + 1);
		i = go_next_word((char *)s, c, i);
		while (itab < nxtwrdlen)
		{
			tab[jtab][itab] = s[i];
			itab++;
			i++;
		}
		tab[jtab][itab] = '\0';
		itab = 0;
		jtab++;
	}
	tab[jtab] = 0;
	return (tab);
}

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
