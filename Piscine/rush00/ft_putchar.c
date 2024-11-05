
#include <unistd.h>
#include <stdio.h>

void ft_putchar(int col, int row, int x, int y){
	if (((col == x) && (row == 1)) || ((col == 1) && (row == y)) 
	|| ((col == x) && (row == y)) || ((col == 1) && (row == 1)))
	{
		write (1, "o", 1);
	}
	else if ((((row != 1)) || (row != y)) && (((col = 1)) || (col = x)))
	{
		write (1, "|", 1);
	}
	else if ((((col != 1 || col != x)) && (row = 1)) ||  
	(((col != 1 || col != x)) && (row = y)))
	{
		write (1, "-", 1);
	}
	else
	{
		write (1, " ", 1);
	}
	row++;
}

void rush (int col, int row){
	int x = col;
	int y = row;

	while (row > 0){
		col = x;
		while (col > 0){
			ft_putchar(col, row, x, y);
			col--;
		}
		write (1, "\n", 1);
		row--;
	}
}

int main (void){
	rush (5,3);
}
