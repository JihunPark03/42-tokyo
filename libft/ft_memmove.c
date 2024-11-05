/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:53 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 11:17:21 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, void *source, size_t num)
{
	char	*strd;
	char	*strs;
	size_t	i;

	i = 0;
	strs = source;
	strd = dest;
	if (strd < strs)
	{
		while (i < num)
		{
			strd[i] = strs[i];
			i++;
		}		
	}
	else
	{
		i = num;
		while (i > 0)
		{
			strd[i -1] = strs[i -1];
			i--;
		}
	}
	return (strd);
}

// int	main(void)
// {
// 	char	strs[] = "123456789";

// 	printf("Before memove: %s\n", strs);
// 	ft_memmove(strs + 3, strs + 1, 4);
// 	printf("After memmove: %s\n", strs);

// 	return (0);
// }
