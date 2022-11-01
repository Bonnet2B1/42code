/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:16:28 by edelarbr          #+#    #+#             */
/*   Updated: 2022/10/31 18:16:28 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Description 
	Alloue (avec malloc(3)) et retourne une zone de mémoire
“fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
échoue, la fonction renvoie NULL.
Param. 
	#1 La taille de la zone de mémoire à allouer.
Retour 
	La zone de mémoire allouée.
Fonctions libc 
	malloc(3)
*/

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc(size);
	if (str)
	{
		ft_bzero(str, size);
		return (str);
	}
	else
		return (NULL);
}
