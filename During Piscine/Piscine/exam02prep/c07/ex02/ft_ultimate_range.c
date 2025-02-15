/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:06:26 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 00:09:08 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	*array;
	int	i;
	int	diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	array = malloc(diff * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;//1D 어레이 주소에 저장

	return (diff);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	diff;

// 	min = -1;
// 	max = 9;
// 	diff = ft_ultimate_range(&range, min, max);//1D array의 주소 전달
// 	if (range != 0)
// 	{
// 		for (i = 0; i < max - min; i++)
// 		{
// 			printf("%d\n", range[i]);
// 		}
// 		printf("Difference is %d\n", diff);
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Failed to allocate memory or invalid range.\n");
// 	}
// 	return (0);
// }
