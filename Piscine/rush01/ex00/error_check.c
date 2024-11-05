/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totake <totake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:41:47 by totake            #+#    #+#             */
/*   Updated: 2024/09/15 21:31:24 by totake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_01.h"

int	ft_put_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_delspace(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			count++;
		i++;
	}
	return (count);
}

int	ft_check_odd_is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 1)
			if (str[i] != ' ')
				return (1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			if (!(str[i] >= '1' && str[i] <= '9'))
				return (1);
		i++;
	}
	return (0);
}

int	ft_check_arg(char *str, t_data *data)
{
	int	i;

	i = 0;
	if (ft_check_odd_is_space(str))
		return (1);
	if (((ft_strlen_delspace(str) % 4) != 0))
		return (1);
	if (!(str[i] >= '1' && str[i] <= ('0' + data->n)))
		return (1);
	if (!((str[ft_strlen(str) - 1] >= '1')
			&& (str[ft_strlen(str) - 1] <= (data->n + '0'))))
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '1' && str[i] <= (data->n + '0')) && str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
