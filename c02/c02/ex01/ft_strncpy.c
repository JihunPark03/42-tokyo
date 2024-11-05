/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:17:23 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/09 20:40:37 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest [i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main (void)
// {
//     char src[] = "Helloworld!";
//     char dest[50];
//     unsigned int n = 7;

//     ft_strncpy(dest, src, n);//change the contents from the address

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return (0);
// }
