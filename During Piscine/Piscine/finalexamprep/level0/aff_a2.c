#include <unistd.h>

int main(int argc, char **argv)
{
	while (*argv[1] != 0)
	{
		write(1, argv[1], 1);
		write(1, "\n", 1);
		argv[1]++;
	}
}
