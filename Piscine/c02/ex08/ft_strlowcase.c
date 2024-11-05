/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:08:17 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/09 16:15:45 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str [i] -= 'A' - 'a';
		i++;
	}
	return (str);
}

// int main (void){
//     char str[] = "1FSDFfaefaef";

//     ft_strlowcase(str);

//     printf("Lowercase: %s\n", str);

//     return (0);
// }
