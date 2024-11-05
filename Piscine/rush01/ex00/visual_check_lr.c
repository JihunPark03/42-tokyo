/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visual_check_lr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totake <totake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:41:47 by totake            #+#    #+#             */
/*   Updated: 2024/09/15 21:11:53 by totake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	roop_left(t_data *data, int row)
{
	int	i;
	int	now;
	int	count;
	int	n;

	i = 0;
	now = 0;
	count = 0;
	n = data->n;
	while (i < n)
	{
		if (now < data->ans[row][i])
		{
			now = data->ans[row][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	is_safe_visual_left(t_data *data, int h, int row, int col)
{
	int	count;
	int	n;

	n = data->n;
	if (col == n - 1)
	{
		data->ans[row][col] = h;
		count = roop_left(data, row);
		if (count == data->visual[2 * n + row])
			return (1);
		data->ans[row][col] = 0;
		return (0);
	}
	return (1);
}

int	roop_right(t_data *data, int row)
{
	int	i;
	int	now;
	int	count;
	int	n;

	n = data->n;
	i = n - 1;
	now = 0;
	count = 0;
	while (i >= 0)
	{
		if (now < data->ans[row][i])
		{
			now = data->ans[row][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	is_safe_visual_right(t_data *data, int h, int row, int col)
{
	int	count;
	int	n;

	count = 0;
	n = data->n;
	if (col == n - 1)
	{
		data->ans[row][col] = h;
		count = roop_right(data, row);
		if (count == data->visual[3 * n + row])
			return (1);
		data->ans[row][col] = 0;
		return (0);
	}
	return (1);
}

int	check_visual(t_data *data, int h, int row, int col)
{
	if (is_safe_visual_up(data, h, row, col) && is_safe_visual_down(data, h,
			row, col) && is_safe_visual_left(data, h, row, col)
		&& is_safe_visual_right(data, h, row, col))
		return (1);
	return (0);
}
