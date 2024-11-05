/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_col_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totake <totake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:41:47 by totake            #+#    #+#             */
/*   Updated: 2024/09/15 20:12:18 by totake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	is_safe_row(t_data *data, int h, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (data->ans[row][i] == h)
			return (0);
		i++;
	}
	return (1);
}

int	is_safe_col(t_data *data, int h, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (data->ans[i][col] == h)
			return (0);
		i++;
	}
	return (1);
}
