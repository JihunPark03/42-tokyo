/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:59:13 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 12:37:52 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*memory(char const *s, size_t len, size_t start)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		len = 0;
	}
	else if (len > s_len)
	{
		len = s_len;
	}
	else if (start + len > s_len)
	{
		len = len - start;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	strindex;
	unsigned int	sindex;

	sindex = 0;
	strindex = 0;
	str = memory(s, len, start);
	if (!str)
	{
		return (NULL);
	}
	while (s[sindex] != '\0')
	{
		if (sindex >= start && strindex < len)
		{
			str[strindex++] = s[sindex];
		}
		sindex++;
	}
	str[strindex] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*original;
// 	size_t	start;
// 	size_t	length;
// 	char	*result;

// 	original = "0123456789";
// 	start = 9;
// 	length = 10;
// 	result = ft_substr(original, start, length);
// 	if (result)
// 	{
// 		printf("Original string: %s\n", original);
// 		printf("Extracted substring: %s\n", result);
// 		free(result); // Free the allocated memory for the substring
// 	}
// 	else
// 	{
// 		printf("Substring not found or memory allocation failed.\n");
// 	}
// 	return (0);
// }
