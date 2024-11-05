/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:23:34 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 09:21:03 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	ints = malloc((max - min) * sizeof(int));
	if (ints == NULL)
	{
		return (NULL);
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
// 	max = 9;
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
