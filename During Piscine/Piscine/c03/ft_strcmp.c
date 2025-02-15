/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:38:34 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/11 11:36:59 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'){
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]); 
}

// #include <stdio.h>

// int main(void)
// {
//     char s1 [] = "helloworld";
//     char s2 [] = "helloWorld";

//     int compare = ft_strcmp(s1, s2);

//     printf("%d\n", compare);

//     return (0);
// }
