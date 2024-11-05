/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:45:51 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 14:06:41 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ptr;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - s1_len];
		}
		i++;
	}
	ptr [i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*s1 = "hello";
// 	char	*s2 = "world";
// 	char	*all = ft_strjoin(s1, s2);
// 	printf("%s\n", all);
// 	free(all);
// }
