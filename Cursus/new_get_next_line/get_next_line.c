/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:59:39 by edelarbr          #+#    #+#             */
/*   Updated: 2022/12/20 18:43:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	ft_strlen_gnl(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i - 1] != '\n')
		i++;
	return (i);
}

int	checknl(char *line)
{
	int i = -1;
	while (line[++i])
	{
		if (line[i] == '\n')
			return (0);
	}
	return (1);
}

char	*ft_strdup_gnl(char *src)
{
	int		i;
	char	*dup;

	i = -1;
	dup = malloc(sizeof(char) * (ft_strlen_gnl(src) + 1));
	if (!dup)
		return (NULL);
	while (src[++i])
		dup[i] = src[i];
	dup[i++] = '\0';
	free(src);
	src = NULL;
	return (dup);
}

char	*ft_strjoin_gnl(char *line, char *buf)
{
	char	*joined = NULL;
	int		i = 0;
	int		j = 0;
	int		k = 0;
	
	if (!line)
		return (ft_strdup_gnl(buf));
	joined = malloc(sizeof(char) * (ft_strlen_gnl(line) + ft_strlen_gnl(buf) + 1));
	if (!joined)
		return (NULL);
	while (line[i])
		joined[j++] = line[i++];
	while (buf[k] && buf[k - 1]!= '\n') // derniere condition pour inclure le nl à la fin de la ligne
		joined[j++] = buf[k++];
	joined[j] = '\0';
	free(line);
	line = NULL;
	return (joined);
}

char *fill_line(int fd, char *line, char *buf)
{
	int			bufend;
	
	bufend = read(fd, buf, BUFFER_SIZE); // Premiere saisie de la ligne
	if (bufend == -1)
		return (NULL);
	buf[bufend] = '\0';					// de la ligne
	line = ft_strjoin_gnl(line, buf);
	if (checknl(line) && bufend > 0)
		fill_line(fd, line, buf);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line = NULL;

	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buf) // allocation de buf pour le premier appel de la fonction
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if(!buf)
			return (NULL);
	}
	line = fill_line(fd, line, buf);
	if (!line)
		return (NULL);
	if (line)
		return(line);
	free(buf);
	buf = NULL;
	return (NULL);
}
