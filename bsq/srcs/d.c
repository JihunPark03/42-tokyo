/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:07:49 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 22:57:02 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	*pos_bsq(int **tab, int size_y, int size_x)
{
	t_pos	big_square;

	big_square.i[0] = 0;
	big_square.i[1] = 0;
	big_square.i[2] = 0;
	big_square.pos = malloc(sizeof(int) * 2);
	big_square.pos[1] = 0;
	if (big_square.pos == NULL)
		exit(0);
	while (big_square.i[0] < size_y)
	{
		while (big_square.i[1] < size_x)
		{
			if (tab[big_square.i[0]][big_square.i[1]] > big_square.i[2])
			{
				big_square.i[2] = tab[big_square.i[0]][big_square.i[1]];
				big_square.pos[0] = big_square.i[0];
				big_square.pos[1] = big_square.i[1];
			}
			big_square.i[1]++;
		}
		big_square.i[1] = 0;
		big_square.i[0]++;
	}
	return (big_square.pos);
}

char	**p_bsq(int **tab_i, char **tab_c, char c, int *pos)
{
	t_bsq	bsq;

	bsq.bigest1 = tab_i[pos[0]][pos[1]];
	bsq.bigest2 = bsq.bigest1;
	bsq.stats = bsq.bigest1;
	bsq.i = pos[0];
	bsq.j = pos[1];
	bsq.n = 0;
	bsq.m = 0;
	while (bsq.m < bsq.bigest1)
	{
		while (bsq.n < bsq.bigest1)
		{
			tab_c[bsq.i - bsq.m][bsq.j - bsq.n] = c;
			bsq.n++;
		}
		bsq.n = 0;
		bsq.m++;
	}
	return (tab_c);
}
