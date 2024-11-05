/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:13:31 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/16 18:55:44 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

#define BOARD_SIZE 10

int	is_queen_at_risk(int board[][BOARD_SIZE], int at_x, int at_y)
{
	int	x;
	int	y;
	int	offsets[2];

	offsets[0] = at_y - at_x;
	offsets[1] = at_y + at_x;
	x = 0;
	while (x < BOARD_SIZE)
	{
		y = 0;
		while (y < BOARD_SIZE)
		{
			if (x == at_x || y == at_y
				|| y == x + offsets[0] || y == -x + offsets[1])
				if (board[y][x])
					return (1);
			y++;
		}
		x++;
	}
	return (0);
}

void	print_queen_position(int board[][BOARD_SIZE])
{
	int	y;
	int	column;

	y = 0;
	while (y < BOARD_SIZE)
	{
		column = 0;
		while (column < BOARD_SIZE)
		{
			if (board[y][column])
			{
				write(1, &"0123456789"[column], 1);
				break ;
			}
			column++;
		}
		y++;
	}
	write(1, "\n", 1);
}

int	recursive_find(int board[][BOARD_SIZE], int x, int *valid)
{
	int	y;

	if (x >= BOARD_SIZE)
		return (1);
	y = 0;
	while (y < BOARD_SIZE)
	{
		if (!is_queen_at_risk(board, x, y))
		{
			board[y][x] = 1;
			if (recursive_find(board, x + 1, valid))
			{
				*valid += 1;
				print_queen_position(board);
			}
			board[y][x] = 0;
		}
		y++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[BOARD_SIZE][BOARD_SIZE];
	int	valid;
	int	column;
	int	index;

	valid = 0;
	column = 0;
	while (column++ < BOARD_SIZE)
	{
		index = 0;
		while (index < BOARD_SIZE)
		{
			board[index++][column - 1] = 0;
		}
	}
	recursive_find(board, 0, &valid);
	return (valid);
}

// int	main(void)
// {
// 	int	solutions;

// 	solutions = ft_ten_queens_puzzle();
// 	printf("Total solutions: %d\n", solutions);
// 	return (0);
// }
