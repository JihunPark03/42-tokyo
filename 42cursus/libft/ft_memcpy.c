/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:50 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 09:12:13 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	char	*strd;
	char	*strs;
	size_t	i;

	i = 0;
	strs = (char *)source;
	strd = (char *)dest;
	if (strs == strd)
	{
		return (strd);
	}
	while (i < num)
	{
		strd[i] = strs[i];
		i++;
	}
	return (strd);
}

// int main(void)
// {
// 	char src[50] = "123456789";
// 	// char dest[50] = "Hello!!";
// 	printf("Before memcpy dest = %s\n", src);
// 	ft_memcpy(src + 3, src + 1, 4);
// 	printf("After memcpy dest = %s\n", src);
// 	return(0);
// }
