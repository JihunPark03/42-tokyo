#include <unistd.h>

int main(int argc, char **argv)
{
	while(*argv[argc - 1])
	{
		write(1, argv[argc - 1], 1);
		argv[argc - 1]++;
	}
}
