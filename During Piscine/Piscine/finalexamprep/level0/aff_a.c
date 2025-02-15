#include <unistd.h>

int main(int argc, char **argv)
{
	char *string;
	int i = 0;
	string = argv[1];
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (string[i] != 0)
	{
		if (string[i] == 'a')
		{
			write(1, "a", 1);
			write(1, "\n", 1);
			break;
		}
		else
		{
			write(1, "\n", 1);
			break;
		}
		i++;
	}
}
