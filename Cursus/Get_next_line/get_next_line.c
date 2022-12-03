/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/03 20:37:35 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	char *storage;
	char *buf;
	int bufi;
	static char **tab;
	static int i;
	if (!tab)
		i = -1;
	int j;
	j = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	storage = NULL;
	while(read(fd, buf, BUFFER_SIZE) > 0)
	{
		buf[BUFFER_SIZE] = '\0';
		storage = ft_strjoin(storage, buf);
		bufi = -1;
		while(buf[bufi++])
			buf[bufi] = '\0'; 
	}
	if (!tab)
		tab = ft_split(storage, '\n');
	free(buf);
	free(storage);
	// while(tab[j][0])
	// 	printf("%s", tab[j++]);
	i++;
	if(tab[i])
		return (tab[i]);
	while (j <= i)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}
