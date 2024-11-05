/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:45:34 by jihpark           #+#    #+#             */
/*   Updated: 2024/10/31 13:46:22 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(char *str, int s)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)s)
		{
			return (&str[i]);
		}
		i++;
	}
	if (s == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

// int main()
// {
// 	char	str[] = "This is simple string";
// 	char	*sh;

// 	printf("Searching for the character 's' in \"%s\"\n", str);
// 	sh = ft_strchr(str, 's');

// 	while (sh != NULL)
// 	{
// 		printf("Found at position- %ld\n", sh - str + 1);
// 		sh = ft_strchr(sh + 1, 's');
// 	}
// 	return (0);
// }
