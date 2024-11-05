/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:55:22 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 22:48:46 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	alg(int left, int up, int upleft)
{
	if (left <= up && left <= upleft)
		return (left + 1);
	if (upleft <= up && upleft <= left)
		return (upleft + 1);
	if (up <= upleft && up <= left)
		return (up + 1);
	return (0);
}

int	*ft_convert_row(char *row, int size_x, char *carac)
{
	int	*ret_row;
	int	i;

	i = 0;
	ret_row = malloc(sizeof(int) * size_x);
	if (ret_row == NULL)
	{
		exit(0);
	}
	while (i < size_x)
	{
		if (row[i] != carac[0] && row[i] != carac[1] && row[i] != carac[2])
		{
			free(ret_row);
			return (NULL);
		}
		if (row[i] == carac[1])
			ret_row[i] = 0;
		else
			ret_row[i] = 1;
		i++;
	}
	return (ret_row);
}

int	**convert(char **tab, int size_y, int size_x, char *carac)
{
	int	**ret;
	int	i;

	i = 0;
	ret = malloc(sizeof(int *) * size_y);
	if (ret == NULL)
	{
		exit(0);
	}
	while (i < size_y)
	{
		ret[i] = ft_convert_row(tab[i], size_x, carac);
		if (ret[i] == NULL)
		{
			while (i > 0)
			{
				free(ret[--i]);
			}
			free(ret);
			return (NULL);
		}
		i++;
	}
	return (ret);
}

int	**map(int **tab, int size_y, int size_x)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < size_y)
	{
		while (j < size_x)
		{
			if (tab[i][j] != 0)
				tab[i][j] = alg(tab[i - 1][j],
						tab[i][j - 1], tab[i - 1][j - 1]);
			j++;
		}
		j = 1;
		i++;
	}
	return (tab);
}
