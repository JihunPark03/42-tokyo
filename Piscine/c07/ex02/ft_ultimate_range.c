/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:06:26 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 12:44:15 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(diff * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (diff);
}

#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;
	int	diff;

	min = -1;
	max = 9;
	diff = ft_ultimate_range(&range, min, max);
	if (range != 0)
	{
		for (i = 0; i < max - min; i++)
		{
			printf("%d\n", range[i]);
		}
		printf("Difference is %d\n", diff);
		free(range);
	}
	return (0);
}
