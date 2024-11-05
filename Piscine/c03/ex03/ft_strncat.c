/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:28:06 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/23 17:01:11 by jihpark          ###   ########.fr       */
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

// #include <stdio.h>

// int main(void)
// {
//     char	src [] = "1234567890";
//     char	dest [] = "12345";
// 	int		nb = 6;

//     char *final = ft_strncat(dest, src, nb);

//     printf("%s\n", final);

//     return (0);
// }
