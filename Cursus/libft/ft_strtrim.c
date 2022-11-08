/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/11/05 08:14:50 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/05 08:14:50 by edelarbr         ###   ########.fr       */
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

// int main()
// {
//   char *str = "&* Hello **World !*& ";
//   char *to_trim = "& *";

//   printf("Début de la chaine : %d\n", getstart(str, to_trim));
//   printf("Fin de la chaine   : %d\n", getend(str, to_trim));
//   printf("Chaine après trim  : %s\n\n", ft_strtrim(str, to_trim));

//   return (0);
// }

// "xxxz  test with x and z and x .  zx  xx z", "z x"
// expected: "test with x and z and x ."
// got: "xxxz  test with x and z and x .  zx  xx z"