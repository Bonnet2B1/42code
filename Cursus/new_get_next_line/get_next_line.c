/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/19 22:10:35 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	check_nl(char *buf, int *stop)
{
	int i = -1;

	if (!*stop)
		return 0;
	while(i++ < BUFFER_SIZE - 1 && *stop)
	{
		if ((buf[i] == '\n' || buf[i] == '\0'))
			*stop += -1;
	}
	return (1);
}

int	bufstart(char *buf, int stop)
{
	int start;

	start = 0;
	if(stop == 1)
	{
		while(buf[start] != '\n' && start < BUFFER_SIZE)
			start++;
	}
	return (start);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line = NULL;
	int			bufend;
	int 		stop;

	stop = 2;
	if(fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!buf)
	{
		stop = 1;
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buf)
			return NULL;
		bufend = read(fd, buf, BUFFER_SIZE);
	}
	while (check_nl(buf, &stop) && bufend > 0)
	{
		buf[bufend] = '\0';
		line = ft_strjoin(line, buf, bufstart(buf, stop));
		if (stop)
			bufend = read(fd, buf, BUFFER_SIZE);
	}
	if (line)
		return (line);
	return (NULL);
}
