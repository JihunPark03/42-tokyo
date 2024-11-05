/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:35:00 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/23 16:55:43 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int number)
{
	char	c;

	if (number > 9)
		ft_putnbr(number / 10);
	c = (number % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// #include <stdlib.h>

// int	ft_strlen(char copy[])
// {
// 	int	i;

// 	i = 0;
// 	while (*copy)
// 	{
// 		copy++;
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*mal;
// 	int		i;

// 	i = 0;
// 	mal = malloc(ft_strlen(src) + 1);
// 	if (mal == NULL)
// 	{
// 		return (NULL);
// 	}
// 	while (src[i] != '\0')
// 	{
// 		mal[i] = src[i];
// 		i++;
// 	}
// 	mal[i] = '\0';
// 	return (mal);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int					i;
// 	struct s_stock_str	*array;

// 	array = malloc((ac + 1) * sizeof(struct s_stock_str));
// 	if (!(array))
// 	{
// 		return (NULL);
// 	}
// 	i = 0;
// 	while (i < ac)
// 	{
// 		array[i].size = ft_strlen(av[i]);
// 		array[i].str = av[i];
// 		array[i].copy = ft_strdup(av[i]);
// 		i++;
// 	}
// 	array[i].str = 0;
// 	array[i].copy = 0;
// 	return (array);
// }

// int	main(int argc, char **argv)
// {
// 	ft_show_tab(ft_strs_to_tab(argc, argv));
// }
