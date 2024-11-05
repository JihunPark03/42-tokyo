/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:16:47 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/14 13:45:38 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write (1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

// int	main(void)
// {
// 	int	nb = 5;
// 	int nb1 = 2147483627;
// 	int nb2 = -2147483628;
// 	int nb3 = -5;
// 	int nb4 = 1000;
// 	ft_putnbr(nb);
// 	ft_putchar('\n');
// 	ft_putnbr(nb1);
// 	ft_putchar('\n');
// 	ft_putnbr(nb2);
// 	ft_putchar('\n');
// 	ft_putnbr(nb3);
// 	ft_putchar('\n');
// 	ft_putnbr(nb4);
// 	ft_putchar('\n');
// }
