/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:00:52 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/07 11:06:29 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// int main (void){
//     int a = 42;
//     int b = 24;
// 	printf("Before swapping: ");
//     printf("%d %d \n", a, b);
//     ft_swap(&a,&b);
// 	printf("After swapping: ");
//     printf("%d %d \n", a, b);
//     return 0;
// }
