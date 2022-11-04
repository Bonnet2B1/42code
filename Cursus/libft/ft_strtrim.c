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

char *ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(set) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	
	str[++i] = '\0';
	return (str);
}
