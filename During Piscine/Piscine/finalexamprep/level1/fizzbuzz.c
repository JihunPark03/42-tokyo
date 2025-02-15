#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void put_nbr(int c)
{
	if (c >= 10)
	{
		put_nbr(c / 10);
	}
	putchar((c % 10) + '0');
}

int main(void)
{
	int a = 1;
	while (a <= 100)
	{
		if(a % 3 == 0 && a % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if(a % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if(a % 5 == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else{
			put_nbr(a);
			write(1, "\n", 1);
		}
		a++;
	}
	return (0);
}
