/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:38:26 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/11 11:37:27 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char s1 [] = "helloworld";
//     char s2 [] = "helloWorld";

//     int n = 6;

//     int compare = ft_strncmp(s1, s2, n);

//     printf("%d\n", compare);

//     return (0);
// }
