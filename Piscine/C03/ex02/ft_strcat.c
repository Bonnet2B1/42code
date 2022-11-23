/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:32:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/23 16:40:13 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	isrc;

	i = 0;
	isrc = 0;
	while (s1[i])
		i++;
	while (s2[isrc])
	{
		s1[i] = s2[isrc];
		i++;
		isrc++;
	}
	s1[i] = '\0';
	return (s1);
}
