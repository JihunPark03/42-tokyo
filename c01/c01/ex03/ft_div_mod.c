/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:08:19 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/07 11:13:53 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main (void){
//     int a = 8;
//     int b = 4;
//     int div;
//     int mod;
//     ft_div_mod(a, b, &div, &mod);
//     printf("div: %d\n", div);
//     printf("mod: %d", mod);

//     return 0;
// }
