/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:20:38 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/13 00:47:13 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int main(void){
    char string [] = "Hello World!";
    int count = ft_strlen(string);
    printf("%d\n", count);
}

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str++)
	{
		count++;
	}
	return (count);
}

int main(void){
    char string [] = "Hello World!";
    int count = ft_strlen(string);
    printf("%d\n", count);
}

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int main(void){
    char string [] = "Hello World!";
    int count = ft_strlen(string);
    printf("%d\n", count);
}
