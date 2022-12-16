/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/10 22:22:12 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int istherenl(char *buf, int len)
{
	int i = 0;
	while(i < len - 1)
	{
		if (!buf[i] || buf[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*get_next_line(int fd)
{
	if(fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static char *savestorage;
	char *buf;
	int buf_i;
	char **tab = NULL;
	static int j;

	j = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	buf_i = read(fd, buf, BUFFER_SIZE);
	while(buf_i > 0)
	{
		buf[buf_i] = '\0';
		savestorage = ft_strjoin(savestorage, buf);
		if (!istherenl(buf, BUFFER_SIZE))
			break ;
		buf_i = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	buf = NULL;
	if (tab)
		freeall(tab, j);
	tab = ft_split(savestorage, '\n');
	if(j < wordcount(savestorage, '\n'))
		return (tab[j++]);
	freeall(tab, j);
	if (savestorage)
		free(savestorage);
	return (NULL);
}
