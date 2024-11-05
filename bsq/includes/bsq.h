/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:00 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/25 23:30:47 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/stat.h>

int				get_size(char *str);
char			*params(char *argv);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
int				**map(int **tab, int size_y, int size_x);
char			**p_bsq(int **tab_i, char **tab_c, char c, int *pos);
int				check_num(char c);
int				size_x(char *argv);
int				*pos_bsq(int **tab, int size_y, int size_x);
void			ft_file(void);
int				alg(int left, int up, int upleft);
int				ft_atoi(char *str);
char			*get_c(char *str);
int				**convert(char **t, int y, int x, char *c);
char			**ft_read(int y, char *argv, int p_size);
void			ft_print_words(char **tab, int x);
void			ft_putchar(char c);
int				bsq(char *argv);

typedef struct s_bsq
{
	int	i;
	int	j;
	int	m;
	int	n;
	int	bigest1;
	int	bigest2;
	int	stats;
}				t_bsq;

typedef struct s_read
{
	int		x;
	int		size;
	int		fd;
	int		i;
	int		j;
	char	**buf;
	char	*str;
	char	b[5];
}				t_read;

typedef struct s_pos
{
	int		i[3];
	int		*pos;
}				t_pos;

#endif
