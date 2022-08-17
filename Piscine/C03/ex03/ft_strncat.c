/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:49:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/27 18:28:21 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
		i++;
	while (src[isrc] && isrc < nb)
	{
		dest[i] = src[isrc];
		i++;
		isrc++;
	}
	dest[i] = '\0';
	return (dest);
}
