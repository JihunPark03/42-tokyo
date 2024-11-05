/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totake <totake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:08:08 by totake            #+#    #+#             */
/*   Updated: 2024/09/15 21:32:55 by totake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_H
# define RUSH_01_H

# include <unistd.h>

typedef struct s_data
{
	int	ans[10][10];
	int	visual[37];
	int	n;
}		t_data;

int		ft_put_error(void);

int		ft_strlen(char *str);

int		ft_strlen_delspace(char *str);

int		ft_check_odd_is_space(char *str);

int		ft_check_arg(char *str, t_data *data);

int		ft_rec(t_data *data, int row, int col);

void	ft_init(t_data *data);

void	ft_put_ans(t_data *data);

void	ft_make_visual_arr(t_data *data, char *str);

int		main(int argc, char **argv);

int		is_safe_row(t_data *data, int h, int row, int col);

int		is_safe_col(t_data *data, int h, int row, int col);

int		roop_left(t_data *data, int row);

int		is_safe_visual_left(t_data *data, int h, int row, int col);

int		roop_right(t_data *data, int row);

int		is_safe_visual_right(t_data *data, int h, int row, int col);

int		roop_down(t_data *data, int col);

int		is_safe_visual_down(t_data *data, int h, int row, int col);

int		roop_up(t_data *data, int col);

int		is_safe_visual_up(t_data *data, int h, int row, int col);

int		check_visual(t_data *data, int h, int row, int col);

#endif
