/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/05 20:13:18 by edelarbr         ###   ########.fr       */
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

char	*get_next_line(int fd)
{
	if(fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static save save;
	save.start = 0;
	save.storage = NULL;
	int buf_i = 0;
	char *buf;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	buf_i = read(fd, buf, BUFFER_SIZE);
	while(buf_i > 0 && findstart(save.storage, &save.start))
	{
		buf[buf_i] = '\0';
		save.storage = ft_strjoin(save.storage, buf); 
		buf_i = read(fd, buf, BUFFER_SIZE);
	}
	if(save.storage[save.start])
		return (ft_substr(save.storage, save.start, nextlen(save.storage, save.start) + 1));
	free(save.storage);
	return (NULL);
}
