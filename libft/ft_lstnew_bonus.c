/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:30:02 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/29 22:14:31 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->next = NULL;
	new->content = content;
	return (new);
}

// int	main(void)
// {
// 	char *str = "helloworld";      // str은 포인터
// 	t_list *node = ft_lstnew(str); // ft_lstnew인자가 포인터이기에 포인터를 집어넣음
// 	printf("%s\n", (char *)node->content);
// 	return (0);
// }
