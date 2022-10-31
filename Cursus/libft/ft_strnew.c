/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 07:43:37 by marvin            #+#    #+#             */
/*   Updated: 2022/09/07 07:43:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char * ft_strnew(size_t size)
{
	char *s;
	s = malloc(sizeof(char) * size + 1);
	ft_memset(s, '\0', size + 1);
	return s;
}