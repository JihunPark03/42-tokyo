/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:55 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 14:07:06 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	is_in_set(char const chr, char const *set)
{
	while (*set)
	{
		if (chr == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*result;
	int		k;

	end = ft_strlen(s1) - 1;
	start = 0;
	k = 0;
	while (s1[end] && is_in_set(s1[end], set))
	{
		end--;
	}
	while (end >= start && is_in_set(s1[start], set))
	{
		start++;
	}
	result = malloc ((end - start + 2) * sizeof(char));
	while (start <= end)
	{
		result[k++] = s1[start++];
	}
	result[k] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char *s1 = "abcHello, abcWorld!abc";
// 	char *set = "abc";
// 	char *result = ft_strtrim(s1, set);

// 	printf("Original: '%s'\n", s1);
// 	printf("Trimmed: '%s'\n", result);
// }
