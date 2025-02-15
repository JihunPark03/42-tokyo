/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:51:33 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/11 11:22:22 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count(char *arr)
{
	int	count;

	count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}

	return (count);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) 
//for copying the entire string, it should return pointer char
{
	int	i;
	int	srccount;
	int destcount;

	i = 0;
	srccount = count(src);
	destcount = count(dest);
	if (size <= destcount)
	{
		return (size + srccount);
	}
	else
	{
		while (src[i] != '\0' && i < size - destcount -1) // total size include null as well
		{
			dest[destcount + i] = src[i];
			i++;
		}
		dest[destcount + i] = '\0';
		return (destcount + srccount);
	}
	
}

int main(void)
{
    char	src [] = "abcdefghijklmnop";
    char	dest [] = "12345";
	int		size = 4;

    int final = ft_strlcat(dest, src, size);

    printf("%d\n", final);
	printf("%s\n", dest);

    return (0);
}
