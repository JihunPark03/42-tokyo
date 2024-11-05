/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:44:36 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 11:27:07 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	size_t			i;
	unsigned char	*cstr1;
	unsigned char	*cstr2;

	i = 0;
	cstr1 = str1;
	cstr2 = str2;
	while (i < n)
	{
		if (cstr1[i] != cstr2[i])
		{
			return (cstr1[i] - cstr2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (cstr1[i] - cstr2[i]);
	}
	return (0);
}

// int	main(void) {
// 	char str1[] = "12345678901400345678";
// 	char str2[] = "1234567";

// 	int result = ft_memcmp(str1, str2, 10);

// 	if (result < 0) {
// 	printf("First is less than second.\n");
// 	} else if (result == 0) {
// 	printf("First is equal to second.\n");
// 	} else {
// 	printf("First is greater than second.\n");
// 	}
// return 0;
// }
