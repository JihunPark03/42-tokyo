/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:08:54 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 22:44:02 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("jihpark", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	r = read(0, buf, 4096);
	while (r > 0)
	{
		write(fd, buf, r);
	}
	close(fd);
}
