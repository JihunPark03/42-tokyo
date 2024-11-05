/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:11:14 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/01 08:52:05 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
//포인터로 받으니, new는 포인터로 설정
{
	if (new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 	{
// 		return (NULL);
// 	}
// 	new->next = NULL;
// 	new->content = content;
// 	return (new);
// }

// int	main(void)
// {
// 	t_list *head = NULL; // head pointer is null
// 	ft_listadd_front(&head, ft_lstnew("Node 3"));
// 	// pass address of head pointer
// 	ft_listadd_front(&head, ft_lstnew("Node 2"));
// 	ft_listadd_front(&head, ft_lstnew("Node 1"));
// }
