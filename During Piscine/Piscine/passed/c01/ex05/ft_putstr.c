/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:18:27 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/12 15:59:30 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') //str[] ~ *str
	{
		write(1, &str[i], 1); //address of str[i] 
		i++;
	}
}

int main(void) 
{
    char *message = "Hello, World!";

    ft_putstr(message);  
    write(1, "\n", 1);  

    return 0;
}
