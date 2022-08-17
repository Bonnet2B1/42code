/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:18:29 by edelarbr          #+#    #+#             */
/*   Updated: 2022/08/04 16:45:33 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] - s1[i] != 0)
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	int i = 1;
	int j = 2;
	while (j < argc -1)
		printf("%d", ft_strcmp(argv[i], argv[j]));
		i++;
		j++;
	return 0;
}