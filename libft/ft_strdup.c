/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:06:34 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 12:29:42 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*mal;
	int		i;

	i = 0;
	mal = malloc(ft_strlen(src) + 1);
	if (mal == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		mal[i] = src[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}

// int	main(void)
// {
// 	char	*string;
// 	char	*copy;

// 	string = "Hello world!";
// 	copy = ft_strdup(string);
// 	if (copy != NULL)
// 	{
// 		printf("Original: %s\n", string);
// 		printf("Copy: %s\n", copy);
// 	}
// 	free(copy);
// 	return (0);
// }
