/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:48:28 by marvin            #+#    #+#             */
/*   Updated: 2022/08/29 17:48:28 by marvin           ###   ########.fr       */
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
