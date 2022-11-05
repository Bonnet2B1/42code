/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 08:14:50 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/05 08:14:50 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int    findlastcharofforstoccu(const char *str, const char *to_find)
{
    int i;
    int j;
    int jgoal;

    i = 0;
	jgoal = strlen(to_find);
    j = 0;

    while (str[i])
    {
        while (str[i] == to_find[j] || j == jgoal)
        {
            if (j == jgoal)
                return (i);
            i++;
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}

int    findfirstcharoflastoccu(const char *str, const char *to_find)
{
    int i;
    int j;

    i = ft_strlen(str) -1;
    j = ft_strlen(to_find) -1;

    while (i >= 0)
    {
        while (str[i] == to_find[j] || j == -1)
        {
            if (j == -1)
                return (i);
            i--;
            j--;
        }
        j = ft_strlen(to_find) -1;
        i--;
    }
    return (0);
}

char    *ft_strtrim(char const *s, char const *set)
{
    char *str;
    unsigned int start = findlastcharofforstoccu(s, set) + 1;
    size_t len = findfirstcharoflastoccu(s, set) + 2 - start;
    str = ft_strsub(s, start, len);
    if (!str)
        return (NULL);
    return (str);
}