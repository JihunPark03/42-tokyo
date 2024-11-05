/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:40:46 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 14:15:52 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	if (size != 0 && ((bytes / size) != nmemb))
		return (NULL);
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

// int main() {
// 	int	n = 5;
// 	int	*array;

// 	array = ft_calloc(n, sizeof(int));

// 	if (array == NULL) {
// 		fprintf(stderr, "Memory allocation failed!\n");
// 		return (1);
// 	}

// 	printf("Array elements after calloc: ");
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	free(array);
// 	return (0);
// }
