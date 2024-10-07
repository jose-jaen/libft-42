/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:29:29 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/28 14:35:34 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	new = NULL;
	if (lst && f)
	{
		while (lst)
		{
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&node, del);
				return (NULL);
			}
			ft_lstadd_back(&new, node);
			lst = lst->next;
		}
	}
	return (new);
}
