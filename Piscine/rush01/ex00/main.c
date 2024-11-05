/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:41:47 by totake            #+#    #+#             */
/*   Updated: 2024/09/17 16:38:27 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	ft_rec(t_data *data, int row, int col)
{
	int	h;

	h = 1; // height is 1
	if (row == data->n) // n is from n*n, if reach end of col
		return (1);//end
	if (col == data->n) // if reach end of row, go to next line
		return (ft_rec(data, row + 1, 0)); // recursive to go to the next line
	while (h <= data->n) // height increase
	{
		if (is_safe_row(data, h, row, col) && is_safe_col(data, h, row, col)
			&& check_visual(data, h, row, col))
		//is_safe_row&is_safe_col: check if there is any place with the same height
		//per each row and column, height should not be the same as other position
		{
			data->ans[row][col] = h;
			if (ft_rec(data, row, col + 1))//next column
				return (1);//end
			data->ans[row][col] = 0;
		}
		h++;//height increases
	}
	return (0);
}

void	ft_init(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			data->ans[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_put_ans(t_data *data)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (data->ans[i][0])
	{
		j = 0;
		while (data->ans[i][j])
		{
			c = data->ans[i][j] + '0';
			write(1, &c, 1);
			if (j != data->n - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_make_visual_arr(t_data *data, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')//until end of array
		{
			data->visual[j] = str[i] - '0';//convert to int, put number into visual
			j++;
		}
		i++;
	}
	data->visual[j] = 0;
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (ft_put_error());
	data.n = ft_strlen_delspace(argv[1]) / 4; //delete spaces between number, "1 2 3" --> "123" and find n for n*n
	if (data.n >= 10 || ft_check_arg(argv[1], &data)) // look for error
		return (ft_put_error());
	ft_init(&data); // fill entire board with 0
	ft_make_visual_arr(&data, argv[1]); // make visual array, visual has n*4 numbers
	if (!ft_rec(&data, 0, 0)) // if output is 0, then causes an error
		return (ft_put_error());
	ft_put_ans(&data);
	return (0);
}
