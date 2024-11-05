/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:03:35 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/09 20:54:48 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *src)
{
	unsigned int	i;

	i = 0;
	if (!*src)
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if (!(src[i] >= 32 && src[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main (void){
//     char src[] = "HELLO";
//     char src1[] = "123";
//     char src2[] = "\nHello\t";

//     int a = ft_str_is_printable(src);
//     int b = ft_str_is_printable(src1);
//     int c = ft_str_is_printable(src2);

//     printf("Source: %d\n", a);
//     printf("Source 1: %d\n", b);
//     printf("Source 2: %d\n", c);

//     return (0);
// }
