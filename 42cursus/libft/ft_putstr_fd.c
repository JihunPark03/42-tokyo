/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:34:08 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/29 21:34:10 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
	{
		return ;
	}
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

// int main(void)
// {
// 	char *str = "hello";
// 	ft_putstr_fd(str, 1);

// 	return(0);
// }
