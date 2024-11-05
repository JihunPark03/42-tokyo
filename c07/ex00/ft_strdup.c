/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:26:50 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 09:20:37 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char copy[])
{
	int	i;

	i = 0;
	while (*copy)
	{
		copy++;
		i++;
	}
	return (i);
}

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

// #include <stdio.h>

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
