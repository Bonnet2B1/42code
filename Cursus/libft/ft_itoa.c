/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:16:25 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:25 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void defsign(int *n, size_t *s_len, char *s)
{
	if (n < 0)
	{
		s = ft_strnew(*s_len + 2);
		s[0] = '-';
		s_len++;
		*n *= -1;
	}
	else
		s = ft_strnew(*s_len + 1);
}

char	*ft_itoa(int n)
{
	size_t	s_len;
	int		n_cpy;
	char	*s;

	s = NULL;
	s_len = 0;
	n_cpy = n;
	while (n_cpy / 10)
	{
		n_cpy /= 10;
		s_len++;
	}
	defsign(&n, &s_len, s);
	// if (n < 0)
	// {
	// 	s = ft_strnew(s_len + 2);
	// 	s[0] = '-';
	// 	s_len++;
	// 	n *= -1;
	// }
	// else
	// 	s = ft_strnew(s_len + 1);
	if (n == 0)
		return ("0");
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
