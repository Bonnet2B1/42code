/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:34 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:34 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
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

// char otoz(unsigned int i, char c)
// {
// 	if (c == 'o' && i < 100 && i > 0)
// 		c = 'z';
// 	return (c);
// }

// int main()
// {
// 	printf("%s\n", ft_strmapi("Helo World !", otoz));
// 	return (0);
// }
