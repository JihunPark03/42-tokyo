/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:33:28 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/05 13:49:53 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	digit = (n % 10) + '0';
	write(fd, &digit, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(INT_MAX, 1);
// 	return (0);
// }
