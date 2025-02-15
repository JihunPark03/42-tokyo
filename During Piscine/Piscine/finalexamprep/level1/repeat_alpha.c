#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];
	while(*str != '\0')
	{
		char i;
		if(*str >= 65 && *str <= 90)
		{
			i = 'A';
		}
		else
		{
			i = 'a';
		}
		while(i <= *str)
		{
			write(1, str, 1);
			i++;
		}
		if(i >= *str)
		{
			write(1, str, 1);
		}
		str++;
	}

	return (0);
}
