
#include <unistd.h>
#include <stdio.h>

void rush(int a, int b){
	char h_line = '-';
	char v_line = '|';
	char circle = 'o';
	int aa = a; //x = 5
	int bb = b; //y = 3
	a = 1;

	while (a <= aa){
		if (((a == aa) && (b == 1)) || ((a == 1) && (b == bb)) || ((a == aa) && (b == bb)) || ((a == 1) && (b == 1)))
		{
			write (1, &circle, 1);
		}
		else if ((((a != 1)) || (a != aa)) && (((b = 1)) || (b = bb)))
		{
			write (1, &h_line, 1);
		}
		else if ((((b != 1)) || (b != bb)) && (((a = 1)) || (a = aa)))
		{
			write (1, &v_line, 1);
		}
		else
		{
			write (1, " ", 1);
		}
		a++;
	}
}

int main (void){
	rush(5,3);
}
