/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:59:22 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/02 10:59:22 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	defsign(int *n, size_t *s_len, char **s)
{
	int	n_cpy;

	n_cpy = *n;
	while (n_cpy / 10)
	{
		n_cpy /= 10;
		(*s_len)++;
	}
	if (*n < 0)
		(*s_len)++;
	*s = ft_calloc(*s_len + 1, sizeof(char));
}

void	intmin(char **s)
{
	*s = ft_calloc(11, sizeof(char));
	*s = ("-2147483648");
}

char	*ft_itoa(int n)
{
	size_t	s_len;
	char	*s;

	if (n == -2147483648)
	{
		intmin(&s);
		return (s);
	}
	defsign(&n, &s_len, &s);
	if (!s)
		return NULL;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n)
	{
		s[s_len] = (n % 10) + 48;
		s_len--;
		n /= 10;
	}
	return (s);
}

#include <stdio.h>

int main()
{
	printf("Le nombre retourne est : %s\n", ft_itoa(2147483647));
}
