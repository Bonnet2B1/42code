/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:10:27 by marvin            #+#    #+#             */
/*   Updated: 2022/09/03 10:10:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

char otoz(unsigned int i, char c)
{
	if (c == 'o' && i < 100 && i > 0)
		c = 'z';
	return c;
}

int main()
{
	printf("%s\n", ft_strmapi("Helo World !", otoz));
	return 0;
}