/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:11:56 by marvin            #+#    #+#             */
/*   Updated: 2022/09/08 13:11:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char * ft_strtrim(char const *s)
{
	size_t i = 0;
	size_t j = 0;
	char *str;
	
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
	return str;
}