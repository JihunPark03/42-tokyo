#include <unistd.h>

int main(void)
{
	char c;

	c = '9';
	while(c >= '1')
	{
		write(1, &c, 1);
		write(1, "\n", 1);
		c--;
	}

}
