/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:55:55 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/23 14:57:20 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!(array))
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	struct s_stock_str	*structs;

// 	structs = ft_strs_to_tab(argc, argv);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("%d\n", i);
// 		printf("original : %s\n", structs[i].str);
// 		printf("copied : %s\n", structs[i].copy);
// 		printf("size : %d\n", structs[i].size);
// 		i++;
// 	}
// }
