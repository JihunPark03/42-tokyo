/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:08:00 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 23:30:42 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_file();
		argv[0] = "jihpark";
		if (bsq(argv[0]) == 1)
			write(2, "map error\n", 11);
	}
	while (i < argc)
	{
		if (i > 1)
			ft_putchar('\n');
		if (bsq(argv[i]) == 1)
			write(2, "map error\n", 11);
		i++;
	}
	return (0);
}

int	bsq(char *argv)
{
	char	**tab_c;
	char	*param;
	char	*carac;
	int		**tab_i;
	int		size[2];

	param = params(argv);
	if (param == 0)
		return (1);
	size[0] = get_size(param);
	carac = get_c(param);
	tab_c = ft_read(size[0], argv, ft_strlen(param));
	if (tab_c == NULL)
		return (1);
	size[1] = size_x(argv);
	tab_i = convert(tab_c, size[0], size[1], carac);
	if (tab_i == NULL || tab_c[0] == NULL)
		return (1);
	tab_i = map(tab_i, size[0], size[1]);
	tab_c = p_bsq(tab_i, tab_c, carac[2], pos_bsq(tab_i, size[0], size[1]));
	ft_print_words(tab_c, size[1]);
	if (tab_i == 0 || tab_c == 0)
		return (1);
	return (0);
}
