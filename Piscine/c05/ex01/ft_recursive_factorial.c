/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:34:53 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/16 18:56:30 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}

// int	main(void)
// {
// 	int	nb;
// 	int	result;

// 	nb = 4;
// 	result = ft_recursive_factorial(nb);
// 	printf("%d\n", result);
// }
