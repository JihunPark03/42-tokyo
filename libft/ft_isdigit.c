/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:54:42 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/25 12:12:02 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(char c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('+'));
// }
