/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:20:55 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:20:55 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applique la fonction f à chaque caractère de la chaine de ca-
// ractères passée en paramètre pour créer une nouvelle chaine
// “fraiche” (avec malloc(3)) résultant des applications succes-
// sives de f.

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <stdlib.h>

// char otoz(char c)
// {
// 	if (c == 'o')
// 		c = 'z';
// 	return (c);
// }

// int main()
// {
// 	printf("%s\n", ft_strmap("Helo World !", otoz));
// 	return (0);
// }
