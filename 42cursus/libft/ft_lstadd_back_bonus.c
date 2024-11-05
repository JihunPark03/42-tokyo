/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:06:12 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/29 22:20:11 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
//포인터로 받으니, in this function, new는 포인터로 설정, lst는 이중포인터
{
	t_list	*first;

	first = *lst;
	if (new != NULL && *lst == NULL)
	{
		*lst = new;
		return ;
	}
	else if (new == NULL || lst == NULL)
	{
		return ;
	}
	while ((*lst)->next != NULL)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = new;
	*lst = first;
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	if (!(new = malloc(sizeof(t_list))))
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
