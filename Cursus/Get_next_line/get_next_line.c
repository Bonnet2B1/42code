/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/03 17:42:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char *storage;
	char *buf;
	char **tab;
	static int i;
	i = -1;
	int j;
	j = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	storage = NULL;
	while(read(fd, buf, BUFFER_SIZE) > 0)
	{
		printf("Test\n");
		buf[BUFFER_SIZE] = '\0';
		storage = ft_strjoin(storage, buf);
	}
	tab = ft_split(storage, '\n');
	free(storage);
	free(buf);
	// while(tab[j][0])
	// 	printf("%s", tab[j++]);
	if(tab[i + 1][0])
	{
		i++;
		return (tab[i]);
	}
	return (NULL);
}
