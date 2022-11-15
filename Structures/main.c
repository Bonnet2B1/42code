/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:54:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/15 08:28:47 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pointhache.h"

int	main(void)
{
	struct Identite	utilisateur[2];

	utilisateur[0].name = "Elias";
	utilisateur[0].age = 21;
	utilisateur[1].name = "Romain";
	utilisateur[1].age = 21;
	printf("%s, %d ans\n", utilisateur[0].name, utilisateur[0].age);
	printf("%s, %d ans\n", utilisateur[1].name, utilisateur[1].age);
}
