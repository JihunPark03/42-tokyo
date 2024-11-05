/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkatayam <kkatayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:47:57 by kkatayam          #+#    #+#             */
/*   Updated: 2024/09/08 21:18:31 by kkatayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	condition02(int col, int row, int x, int y)
{
	if ((col == x || col == 1) && row == y)
	{
		ft_putchar('A');
	}
	else if ((col == x || col == 1) && row == 1)
	{
		ft_putchar('C');
	}
	else if (col == x || col == 1 || row == y || row == 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush02(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0 || x > 1000 || y > 1000)
	{
		write(1, "Error: Invalid dimensions\n", 26);
		return ;
	}
	row = y;
	while (row > 0)
	{
		col = x;
		while (col > 0)
		{
			condition02(col, row, x, y);
			col--;
		}
		ft_putchar('\n');
		row--;
	}
}
