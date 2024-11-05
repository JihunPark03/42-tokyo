/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:29:04 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 12:28:35 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*node;

	node = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&node, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&node, newnode);
		lst = lst->next;
	}
	newnode = NULL;
	return (node);
}
