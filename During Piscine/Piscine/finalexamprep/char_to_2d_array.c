#include <unistd.h>

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s", argv[1]);
	printf("%c", *argv[1]);
	argv[1]++;
	printf("%c", *argv[1]);
	printf("%c", *argv[2]);
}

// **argv
//./a.out abc 123

// *argv --> abc = argv[0]
// argv++
// *argv --> 123 = argv[1]

// *argv[1] -> a = first letter of first argument = argv[1][0]
// argv[1]++ 
// *argv[1] -> b = second letter of first argument = argv[1][1]
// *argv[2] -> 1 = first letter of second argument(b) = argv[2][0]

//1. bring 2d array to 1d array

int main(int argc, char **argv)
{
	int i = 0;
	char *string = argv[1];
	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		write(1, "\n", 1);
		i++;
	}
}

//2. 좌표식

int main(int argc, char **argv)
{
	int i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		write(1, "\n", 1);
		i++;
	}
}

//3. Not possible

int main(int argc, char **argv)
{
	int i = 0;
	while (*argv[i] != '\0')
	{
		write(1, argv[i], 1);
		write(1, "\n", 1);
		i++;
	}
}
