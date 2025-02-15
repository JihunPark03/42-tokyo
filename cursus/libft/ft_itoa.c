/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:42:04 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 12:28:16 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	handle_int_min(char *str)
{
	str[0] = '-';
	str[1] = '2';
}

static void	convert_positive(int nb, char *str, int *len)
{
	while (nb > 0)
	{
		str[--(*len)] = (nb % 10) + '0';
		nb /= 10;
	}
}

static void	initialize_str(char *str, int len)
{
	str[len] = '\0';
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		len;

	len = ft_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	initialize_str(str, len);
	if (nb == 0)
		str[0] = '0';
	else if (nb == INT_MIN)
	{
		handle_int_min(str);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	convert_positive(nb, str, &len);
	return (str);
}
// int	main(void)
// {
// 	int		tab[5] = {-123456789, -42, 0, 42, 2147483647};
// 	char	*str;

// 	for (int i = 0; i < 5; i++)
// 	{
// 		str = ft_itoa(tab[i]);
// 		printf("%s\n", str);
// 		free(str);
// 	}
// 	return (0);
// }
