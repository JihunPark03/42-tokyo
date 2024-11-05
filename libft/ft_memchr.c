/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:20:10 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 11:22:49 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memchr(void *str, int c, size_t n)
{
	char	*ptr;
	char	ch;
	size_t	i;

	ptr = str;
	i = 0;
	ch = c;
	while (i < n)
	{
		if (ptr[i] == ch)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void) {
// 	const char str[] = "Welcome to Japan!!";
// 	const char ch = 't';

// 	char* result = (char*)memchr(str, ch, 1);

// 	if (result != NULL) {
// 		printf("'%c' found at position %ld\n", ch, result - str);
// 	} else {
// 		printf("'%c' not found in the string\n", ch);
// 	}
// 	return 0;
// }
