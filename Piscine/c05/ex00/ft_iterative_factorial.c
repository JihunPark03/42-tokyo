/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:34:40 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/17 13:48:42 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 6;
	result = ft_iterative_factorial(nb);
	printf("%d\n", result);
}
