/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:45:05 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/14 11:11:20 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	nb = ft_atoi("            ---+--+1234ab567");
// 	printf("%d\n", nb);
// 	return (0);
// }
