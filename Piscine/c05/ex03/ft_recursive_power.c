/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:34 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/16 18:56:13 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

// int	main(void)
// {
// 	int	nb;
// 	int	result;
// 	int	power;

// 	nb = 5;
// 	power = 2;
// 	result = ft_recursive_power(nb, power);
// 	printf("%d\n", result);
// }
