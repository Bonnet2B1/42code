/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/17 17:24:39 by edelarbr         ###   ########.fr       */
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
		if (buf[i] == '\n' || buf[i] == '\0')
			*stop = 0;
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line = NULL;
	int			bufend;
	int 		stop;

	stop = 1;
	if(fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!buf)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buf)
			return NULL;
		bufend = read(fd, buf, BUFFER_SIZE);
	}
	while (check_nl(buf, &stop) && bufend > 0)
	{
		buf[bufend] = '\0';
		line = ft_strjoin(line, buf);
		if (stop)
			bufend = read(fd, buf, BUFFER_SIZE);
	}
	if (line)
		return (line);
	return (NULL);
}
