/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:09:25 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/01 09:37:36 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str_1, const char *str_2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*str_2 == '\0')
		return ((char *)str_1);
	i = 0;
	while (str_1[i] != '\0' && i < len)
	{
		if (str_1[i] == str_2[0])
		{
			j = 0;
			while (str_2[j] != '\0' && (i + j) < len && str_1[i
					+ j] == str_2[j])
			{
				j++;
			}
			if (str_2[j] == '\0')
			{
				return ((char *)&str_1[i]);
			}
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	str_1[100] = "Welcome to Tutorialspoint";
// 	char	*str_2;

// 	str_2 = ft_strnstr(str_1, "ials", 17);
// 	printf("\nSubstring is: %s", str_2);
// 	return (0);
// }

// int main() {
// 	char *haystack = "This is a simple string.";
// 	char *needle = "simple";

// 	char *result = ft_strnstr(haystack, needle, 10);

// 	if (result != NULL) {
// 		printf("Substring found: \"%s\"\n", result);
// 	} else {
// 		printf("Substring not found within the first 10 characters.\n");
// 	}

// 	return (0);
// }
