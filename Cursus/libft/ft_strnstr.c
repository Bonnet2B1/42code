/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:39:23 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/09 18:57:05 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	ii;
	char	*str_not_const;

	str_not_const = (char *)str;
	i = 0;
	ii = 0;
	if (to_find[ii] == '\0')
		return (str_not_const);
	while (str_not_const[i])
	{
		while (str_not_const[i + ii] == to_find[ii]
			&& str_not_const[i + ii] && i + ii < n)
			ii++;
		if (!to_find[ii])
			return (str_not_const + i);
		i++;
		ii = 0;
	}
	return (0);
}

// char	*ft_strnstr(const char *str, const char *to_find, size_t n)
// {
// 	size_t i;

// 	i = 0;
// 	if (!*to_find || !to_find)
// 		return ((char *)str);
// 	while (i < n && str[i])
// 	{
// 		if(str[i] == *to_find)
// 		{
// 			if (!ft_strncmp
//(ft_substr(&((char *)str)[i], 0, n - i), to_find, ft_strlen(to_find)))
// 				return (&((char *)str)[i]);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "lorem ipsum dolor sit amet";
//     char *s2 = "dolor";
// 	printf("%s\n", ft_strnstr(s1, s2, 15));
// 	printf("%s\n", strnstr(s1, s2, 50));
// }
