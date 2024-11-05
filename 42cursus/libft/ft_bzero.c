/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:22 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/29 20:16:28 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ret;
	size_t	index;

	index = 0;
	ret = s;
	while (index < n)
	{
		ret[index] = 0;
		index++;
	}
}

// int	main(void)
// {
// 	char str[] = "123456789";
// 	printf("%s\n", str);
// 	ft_bzero(str, 5);
// 	for (int i = 0; i < sizeof(str); i++) {
//         printf("Character %d: '%c' (ASCII: %d)\n", i, str[i], str[i]);
//     }
// }
