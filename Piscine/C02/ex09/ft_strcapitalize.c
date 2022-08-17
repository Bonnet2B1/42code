/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:59:28 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/24 18:54:30 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_alpha(char c)
{
	if (ft_isuppercase(c) || ft_islowercase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isuppercase(str[i]))
			str[i] += 32;
	}
	if (ft_islowercase(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!ft_isnumber(str[i - 1]) && !ft_is_alpha(str[i - 1])
			&& ft_islowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
