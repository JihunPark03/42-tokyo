/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:23:53 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/13 07:32:20 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i <= size / 2 - 1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int main(void){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);  
    ft_rev_int_tab(arr , size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}
