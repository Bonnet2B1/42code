/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:16:40 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:40 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*char_str;

	i = 0;
	char_str = (unsigned char *)str;
	while (i < n)
		char_str[i++] = (unsigned char)c;
	str = (void *)char_str;
	return (str);
}
