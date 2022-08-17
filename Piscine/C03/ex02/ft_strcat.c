/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:32:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/27 18:28:17 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
		i++;
	while (src[isrc])
	{
		dest[i] = src[isrc];
		i++;
		isrc++;
	}
	dest[i] = '\0';
	return (dest);
}
