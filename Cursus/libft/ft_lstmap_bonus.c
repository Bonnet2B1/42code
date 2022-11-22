/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:17:59 by edelarbr          #+#    #+#             */
/*   Updated: 2022/11/22 11:43:31 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	while (lst)
	{
		f(lst->content);
		new = ft_lstnew(lst->content);
		new->next = lst->next;
		new = new->next;
		if (lst)
		{
			tmp = lst->next;
			ft_lstdelone(lst, del);
			lst = tmp;
		}
	}
	return (new);
}
