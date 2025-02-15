/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:04:02 by kkatayam          #+#    #+#             */
/*   Updated: 2024/09/08 19:50:55 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    condition(int col, int row, int x, int y)
{
    if (((col == x  col == 1) && (row == y  row == 1)))
        ft_putchar('o');
    else if ((col > 1 && col < x) && (row == y  row == 1))
        ft_putchar('-');
    else if ((col == 1  col == x) && (row > 1 && row < y))
        ft_putchar('|');
    else
        ft_putchar(' ');
}

void    rush00(int x, int y)
{
    int    col;
    int    row;

    if (x <= 0  y <= 0  x > 1000 || y > 1000)
    {
        write(1, "Error: Invalid dimensions\n", 26);
    }
    row = y;
    while (row > 0)
    {
        col = x;
        while (col > 0)
        {
            condition(col, row, x, y);
            col--;
        }
        ft_putchar('\n');
        row--;
    }
}