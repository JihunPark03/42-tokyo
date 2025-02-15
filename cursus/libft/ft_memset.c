/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:58 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/29 21:31:56 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = str;
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	str[] = "helloworld";

// 	printf("%s\n", str);
// 	ft_memset(str, 0, 6);
// 	printf("%s", str);
// 	return (0);
// }
