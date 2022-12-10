/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/09 18:55:40 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	if(fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	char *storage;
	char *buf;
	int bufi;
	static char **tab;
	static int j;

	j = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	storage = NULL;
	bufi = read(fd, buf, BUFFER_SIZE);
	while(bufi > 0)
	{
		buf[bufi] = '\0';
		storage = ft_strjoin(storage, buf); 
		bufi = read(fd, buf, BUFFER_SIZE);
	}
	if (!tab)
		tab = ft_split(storage, '\n');
	// while(tab[j][0])
	// 	printf("%s", tab[j++]);
	if(*tab)
		return (*tab++);
	freeall(tab, j);
	if (storage)
		free(storage);
	return (NULL);
}
