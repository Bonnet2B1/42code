/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:54:12 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/15 15:26:31 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pointhache.h"

// typedef struct Identite
// {
// 	char	*name;
// 	int		age;
// } Identite;

// void createidentite(Identite *utilisateur)
// {
// 	utilisateur->name = "Romain";
// 	utilisateur->age = 21;
// }

// int	main(void)
// {
// 	Identite		utilisateur[2];

// 	utilisateur[0].name = "Elias";
// 	utilisateur[0].age = 21;
// 	createidentite(&utilisateur[1]);

// 	printf("%s, %d ans\n", utilisateur[0].name, utilisateur[0].age);
// 	printf("%s, %d ans\n", utilisateur[1].name, utilisateur[1].age);
// }

typedef struct Element	Element;
struct					Element
{
	int					nombre;
	Element				*suivant;
};

typedef struct Liste	Liste;
struct					Liste
{
	Element				*premier;
};

Liste	*initialisation()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if (liste == NULL || element == NULL)
	{
		exit(EXIT_FAILURE);
	}

	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;

	return (liste);
}

void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}