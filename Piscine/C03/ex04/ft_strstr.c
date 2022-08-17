/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:39:23 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/27 18:28:57 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (to_find[ii] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + ii] == to_find[ii] && str[i + ii])
			ii++;
		if (to_find[ii] == '\0')
			return (str + i);
		i++;
		ii = 0;
	}
	return (0);
}
