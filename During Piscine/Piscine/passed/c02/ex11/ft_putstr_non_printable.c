/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:21:13 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/13 01:10:34 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &hex_digits[str[i] / 16], 1);
			write(1, &hex_digits[str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
