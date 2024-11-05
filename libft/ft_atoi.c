/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:47:44 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 12:37:06 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

static int	ft_issplace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char const *str)
{
	int	i;
	int	sign;
	int	result;
	int	sign_count;

	i = 0;
	sign = 1;
	result = 0;
	sign_count = 0;
	while (ft_issplace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (++sign_count > 1)
			return (0);
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i++] - '0');
	}
	return (sign * result);
}

// int	main(void)
// {
// 	int val;
// 	char *str;
// 	str = "234567";
// 	val = ft_atoi(str);
// 	printf("integral number = %d", val);
// 	val = atoi(str);
// 	printf("integral number = %d", val);
// }
