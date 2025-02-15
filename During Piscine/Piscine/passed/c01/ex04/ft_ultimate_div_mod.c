/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:14:18 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/07 11:17:31 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int main (void){
//     int a = 3;
//     int b = 2;
//     ft_ultimate_div_mod(&a, &b);
//     printf("div: %d\n", a);
//     printf("mod: %d", b);
//
//     return 0;
// }
