/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:01:59 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/14 13:45:20 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_valid(char c, char *base)
// check if a character reappears in remaining part of base string
{
	while (*base)
	{
		if (c == *base)
		{
			return (1);
		}
		base++;
	}
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int basesize)
{
	if (n > basesize - 1)
	{
		ft_print(n / basesize, base, basesize);
		n = n % basesize;
	}
	ft_putchar (base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_is_valid(base[i], &base[i + 1])
			|| (base[i] >= 9 && base[i] <= 13))
		{
			return ;
		}
		i++;
	}
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, i);
	}
	else
	{
		ft_print(nbr, base, i);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(251, "0123456789ABCDEF");
// 	return (0);
// }
