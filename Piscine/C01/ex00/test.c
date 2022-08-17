/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:25:58 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/18 14:08:28 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int a = 10;
    int *pa =&a;

    printf("a = %d (adresse : %p)\n", a, &a);
    printf("=> %p\n\n", pa);

    printf("La valeur stockée à l'adresse %p est %d et l' adresse du pointeur qui me permet d' afficher ca est :\n\n", pa, *pa, &pa);
    return 0;
}
