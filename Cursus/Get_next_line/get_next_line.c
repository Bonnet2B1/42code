/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/03 16:05:50 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *storage;
	char *buf;
	static char **tab;
	static int i = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	storage = NULL;
	while(read(fd, buf, BUFFER_SIZE) > 0)
	{
		buf[BUFFER_SIZE] = '\0';
		storage = ft_strjoin(storage, buf);
	}
	tab = ft_split(storage, '\n');
	// while(tab[i][0])
	// {
	// 	i++;
	// 	return (&tab[i][0]);
	// }
	return(tab[i]);
	return (NULL);
}
