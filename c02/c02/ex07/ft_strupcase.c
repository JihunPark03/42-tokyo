/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:05:33 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/09 17:44:02 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str [i] += 'A' - 'a';
		i++;
	}
	return (str);
}

// int main (void){
//     char str[] = "1faseFd";

//     ft_strupcase(str);

//     printf("Uppercase: %s\n", str);

//     return (0);
// }
