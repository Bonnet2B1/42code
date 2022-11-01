/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:17:52 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:52 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	j;
	size_t	i;
	char	*str;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		if (!ft_isspace(s[i]))
		{
			str[j] = s[i];
			i++;
			j++;
		}
		else
			i++;
	}
	str[j] = '\0';
	return (str);
}
