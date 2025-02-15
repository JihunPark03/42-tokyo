#include <unistd.h>

int ft_len(char *str)
{
	int i = 0;
	while(*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == *argv[2])
		{
			argv[2]++;
			j++;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
