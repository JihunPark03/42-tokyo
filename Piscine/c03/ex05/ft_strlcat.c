/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:51:33 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/23 17:02:04 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *arr)
{
	int	count;

	count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>

// int main(void)
// {
//     char	src [] = "abcdefghijklmnop";
//     char	dest [] = "12345";
// 	int		size = 7;

//     int final = ft_strlcat(dest, src, size);

//     printf("%d\n", final);
// 	printf("%s\n", dest);

//     return (0);
// }
