/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:14:44 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/14 16:14:44 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getstart(const char *s, const char *set)
{
	int	start;

	start = 0;
	while (ft_strchr(set, s[start]))
		start++;
	return (start);
}

int	getend(const char *s, const char *set)
{
	int	end;

	end = ft_strlen(s);
	while (ft_strrchr(set, s[end]))
		end--;
	return (end - getstart(s, set) + 1);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;

	if (s[0] == '\0' || set[0] == '\0')
		return (ft_strdup(s));
	str = ft_substr(s, getstart(s, set), getend(s, set));
	if (!str)
		return (NULL);
	return (str);
}

#include <stdio.h>

int main()
{
  char *str = "&* *Hello **World !*& ";
  char *set= "& *";

  printf("Début de la chaine : %d\n", getstart(str, set));
  printf("Fin de la chaine   : %d\n", getend(str, set));
  printf("Chaine après trim  : %s\n\n", ft_strtrim(str, set));

  return (0);
}
