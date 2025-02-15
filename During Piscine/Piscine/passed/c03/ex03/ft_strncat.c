/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:28:06 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/13 13:16:59 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *arr)
{
	int	count;

	count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
//for copying the entire string, it should return pointer char
{
	unsigned int	i;
	int				destcount;

	i = 0;
	destcount = count(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[destcount + i] = src[i];
		i++;
	}
	dest[destcount + i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
    char	src [] = "1234567890";
    char	dest [] = "12345";
	int		nb = 7;

    char *final = ft_strncat(dest, src, nb);

    printf("%s\n", final);

    return (0);
}
