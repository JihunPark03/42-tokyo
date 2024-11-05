/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:31:53 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 10:38:15 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	f(unsigned int i, char *c)
// {
// 	*c += 1;
// }

// int	main(void)
// {
// 	char	str[] = "aaaa";

// 	ft_striteri(str, &f);
// 	printf("%s\n", str);
// }
