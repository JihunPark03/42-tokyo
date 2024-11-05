/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:42:02 by kkatayam          #+#    #+#             */
/*   Updated: 2024/09/10 10:57:59 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	condition01(int col, int row, int x, int y)
{
	if (col == x && row == y)
	{
		ft_putchar('/');
	}
	else if ((col == x && row == 1) || (col == 1 && row == y))
	{
		ft_putchar('\\');
	}
	else if (col == 1 && row == 1)
	{
		ft_putchar('/');
	}
	else if (col == x || col == 1 || row == y || row == 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int x, int y)
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
			condition01(col, row, x, y);
			col--;
		}
		ft_putchar('\n');
		row--;
	}
}
