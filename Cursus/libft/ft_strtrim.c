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

int getstart(char *s, char *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i++] && set[j])
	{
		j = 0;
		while (s[i++] == set[j++] && set[j++]){}
	}
	if (!set[j])
		return (i);
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int i;
	
	i = 0;
	free((void *)s);
	free((void *)set);
	return NULL;
}

// #include <stdio.h>

// int main() 
// {
//   char *str = "**Hello **World !**";
//   char *to_trim = "*";
  
//   printf("\n%d\n\n", getstart(str, to_trim)); 
//   return 0;
// }