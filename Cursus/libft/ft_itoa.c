/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:09:08 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/01 16:09:08 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	defsign(int *n, size_t *s_len, char **s)
{
	int n_cpy;

	n_cpy = *n;
	while (n_cpy / 10)
	{
		n_cpy /= 10;
		(*s_len)++;
	}
	if (*n < 0)
		(*s_len)++;
	*s = ft_strnew(*s_len + 1);
}

char	*ft_itoa(n)
{
	size_t s_len;
	char *s;

	defsign(&n, &s_len, &s);
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

// int main()
// {
// 	printf("Le nombre retourne est : %s\n", ft_itoa(0));
// }
