/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 08:14:50 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/05 08:14:50 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int getstart(const char *s, const char *set)
{
	int i;

	i = 0;
	while (ft_strchr(set, s[i]))
		i++; 
	return (i);
}

int getend(const char *s, const char *set)
{
	int i;

	i = ft_strlen(s) + 1;
	while (ft_strchr(set, s[i]))
		i--; 
	return (i - getstart(s, set));
}

char	*ft_strtrim(const char *s, const char *set)
{
	char *str;

	str = ft_substr(s, getstart(s, set), getend(s, set));
	if (!str)
		return NULL;
	return (str);
}

#include <stdio.h>

int main() 
{
  char *str = "&* Hello **World !*& ";
  char *to_trim = "& *";
  
  printf("Début de la chaine : %d\n", getstart(str, to_trim)); 
  printf("Fin de la chaine   : %d\n", getend(str, to_trim)); 
  printf("Chaine après trim  : %s\n\n", ft_strtrim(str, to_trim)); 

  return 0;
}

// "xxxz  test with x and z and x .  zx  xx z", "z x"
// expected: "test with x and z and x ."
// got: "xxxz  test with x and z and x .  zx  xx z"