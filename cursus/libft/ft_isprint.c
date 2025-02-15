/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:46 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/25 12:15:10 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(char c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint('+'));
// }
