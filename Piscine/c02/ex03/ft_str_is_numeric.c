/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:55:18 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/09 20:53:46 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *src)
{
	unsigned int	i;

	i = 0;
	if (!*src)
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if (!(src[i] >= '0' && src[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main (void){
//     char src[] = "Hello";
//     char src1[] = "123";
//     char src2[] = "";

//     int a = ft_str_is_numeric(src);
//     int b = ft_str_is_numeric(src1);
//     int c = ft_str_is_numeric(src2);

//     printf("Source: %d\n", a);
//     printf("Source 1: %d\n", b);
//     printf("Source 2: %d\n", c);

//     return (0);
// }
