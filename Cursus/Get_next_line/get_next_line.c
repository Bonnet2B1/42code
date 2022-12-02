/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/02 18:44:11 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *storage;
	char *buf;
	char **tab;

	buf = NULL;
	storage = NULL;
	while(read(fd, buf, BUFFER_SIZE))
		storage = ft_strjoin(storage, buf);
	tab = ft_split(storage, '\n');
	while(*tab)
		return (*tab++);
	return (NULL);
}
