/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:37:20 by marvin            #+#    #+#             */
/*   Updated: 2022/09/08 11:37:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t i = 0;
	size_t j = 0;
	if (!*s1 || !*s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + strlen(s2)));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/* 
int main()
{
	printf("Retour de ft_strjoin : %s", ft_strjoin("Hello ", "World !"));
}
*/