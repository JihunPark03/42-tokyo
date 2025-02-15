/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:16:47 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/13 12:56:50 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write (1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483628)
	{
		write (1, "-2147483628", 11);
		return;
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

int	main(void)
{
	int	nb = 5;
	int nb1 = 2147483629;
	int nb2 = -2147483628;
	int nb3 = -5;
	int nb4 = 1000;
	ft_putnbr(nb);
	ft_putchar('\n');
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putnbr(nb2);
	ft_putchar('\n');
	ft_putnbr(nb3);
	ft_putchar('\n');
	ft_putnbr(nb4);
	ft_putchar('\n');
}
