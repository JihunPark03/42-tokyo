/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:04 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 14:06:55 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	if ((char)c == '\0' && s[size] == '\0')
		return (&((char *)s)[size]);
	while (size > 0)
	{
		size--;
		if (s[size] == (char)c)
			return (&((char *)s)[size]);
	}
	return (0);
}

// int main () {
// 	int len;
// 	const char str[] = "https://www.www.com";
// 	const char ch = '.';
// 	char *ret;

// 	ret = strrchr(str, ch);

// 	printf("String after |%c| is - |%s|\n", ch, ret);

// 	return(0);
// }
