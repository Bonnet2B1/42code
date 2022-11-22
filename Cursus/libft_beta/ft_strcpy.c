/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:44:13 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:17:13 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* 
#include <stdio.h>

int main(void)
{
	char dest[] = "destination";
	char src[] = "source";
	printf("Avant ft_strcpy : %s\n", dest);
	ft_strcpy(dest, src);
	printf("Apres ft_strcpy : %s", dest);
}
*/
