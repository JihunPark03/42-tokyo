/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:08:16 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 22:08:19 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	size_x(char *argv)
{
	int		i;
	int		o;
	int		fd;
	char	buf[1];

	i = 0;
	o = 0;
	fd = open(argv, O_RDONLY);
	while (o != 2)
	{
		if (read(fd, buf, 1) <= 0)
			return (0);
		if (buf[0] == '\n')
			o++;
		if (o == 1)
		{
			i++;
		}
	}
	close(fd);
	return (i - 1);
}

char	**initialize_buffer(t_read *bsq, int y)
{
	bsq->buf = malloc(y * sizeof(char *) + 1);
	if (bsq->buf == NULL)
		exit(0);
	bsq->buf[0] = malloc(bsq -> x * sizeof(char));
	return (bsq->buf);
}

void	read_file_content(t_read *bsq, int y)
{
	bsq->i = 0;
	while (read(bsq->fd, bsq->buf[bsq->i], bsq->x) > 0)
	{
		bsq->i++;
		read(bsq->fd, bsq->b, 1);
		if (bsq->b[0] != '\n' || bsq->i > y)
			return ;
		bsq->buf[bsq->i] = malloc(bsq->x * sizeof(char));
	}
	bsq->buf[bsq->i] = NULL;
}

char	**ft_read(int y, char *argv, int p_size)
{
	t_read	bsq;

	if (y == 0)
		return (NULL);
	bsq.x = size_x(argv);
	bsq.fd = open(argv, O_RDONLY);
	if (bsq.fd < 0)
		return (NULL);
	bsq.buf = initialize_buffer(&bsq, y);
	read(bsq.fd, bsq.buf[0], p_size);
	read_file_content(&bsq, y);
	close(bsq.fd);
	return (bsq.buf);
}
