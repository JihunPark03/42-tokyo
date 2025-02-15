/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:28:14 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/11 17:35:39 by jihpark          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
//for copying the entire string, it should return pointer char
{
	int	i;
	int	srccount;
	int	destcount;

	i = 0;
	srccount = count(src);
	destcount = count(dest);
	while (i < srccount)
	{
		dest[destcount + i] = src[i];
		i++;
	}
	dest[destcount + srccount] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//     char	src [] = "world";
//     char	dest [] = "hello";

//     char *final = ft_strcat(dest, src);

//     printf("%s\n", final);

//     return (0);
// }
