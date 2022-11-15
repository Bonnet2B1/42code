/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:54:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/15 09:16:59 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pointhache.h"

typedef struct Identite
{
	char	*name;
	int		age;
} Identite;

void createidentite(Identite *utilisateur)
{
	utilisateur->name = "Romain";
	utilisateur->age = 21;
}

int	main(void)
{
	Identite	 utilisateur[2];

	utilisateur[0].name = "Elias";
	utilisateur[0].age = 21;
	createidentite(&utilisateur[1]);

	printf("%s, %d ans\n", utilisateur[0].name, utilisateur[0].age);
	printf("%s, %d ans\n", utilisateur[1].name, utilisateur[1].age);
}
