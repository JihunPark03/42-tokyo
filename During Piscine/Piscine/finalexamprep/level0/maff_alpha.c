#include <unistd.h>

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		else{
			write(1, &c, 1);
		}
		c++;
	}

	return (0);	
}
