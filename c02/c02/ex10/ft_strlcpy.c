/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:18:35 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/10 10:19:30 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_length(src));
}

#include <stdio.h>

int main(void) {
    char src[] = "Hello, world!";
    char dest[50];  
    unsigned int size = 10;  

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of src: %u\n", result);

    return 0;
}
