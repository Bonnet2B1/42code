/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/14 15:14:01 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int findstart(char *s, int *i)
{
	while (s[*i])
	{
		if (s[*i] == '\n' || !s[*i])
			return (0);
		(*i)++;
	}
	return (1);
}

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
	static int savestart = -1;
	static char *savestorage = NULL;
	char *buf = NULL;
	int buf_i;
	
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	buf_i = read(fd, buf, BUFFER_SIZE);
	if (!*buf)
		savestorage = ft_strjoin(savestorage, "\0");
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
	savestart += (nextlen(savestorage, savestart) + 1);
	if(buf_i >= 0 && savestorage[savestart])
		return (ft_substr(savestorage, savestart, nextlen(savestorage, savestart) + 1));
	free(savestorage);
	savestorage = NULL;
	return (NULL);
}
