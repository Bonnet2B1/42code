/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:59:28 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:59 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isupper(str[i]))
			str[i] += 32;
	}
	if (ft_islower(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i - 1]) && !ft_isalpha(str[i - 1])
			&& ft_islower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}