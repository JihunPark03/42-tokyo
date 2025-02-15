/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:23:34 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 00:11:44 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	ints = malloc((max - min) * sizeof(int));
	if (ints == 0)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = -1;
// 	max = 2;
// 	range = ft_range(min, max);
// 	if (range != 0)
// 	{
// 		for (i = 0; i < max - min; i++)
// 		{
// 			printf("%d\n", range[i]);
// 		}
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory or invalid range.\n");
// 	}
// 	return (0);
// }

