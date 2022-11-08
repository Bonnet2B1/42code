/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:33:10 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/08 10:24:18 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int i;
	
	i = 0;
	if (n > ft_strlen(dst) - 1)
		n = ft_strlen(dst) - 1; 
	while (src[i] && n--)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int main()
{
	char *src = "Hello World !";
	char *dst = "blablacar";
	ft_putstr(ft_itoa(ft_strlcpy(dst, src, 5)));
	ft_putchar('\n');
	ft_putstr(dst);
	ft_putchar('\n');
}