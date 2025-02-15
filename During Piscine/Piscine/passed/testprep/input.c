#include <stdio.h>

int main(int argc, char *argv[]) 
//argc = argument count - number of command line arguments
//argv = argument vector array of string
{
	printf("Number of arguments: %d\n", argc); // number of argument
	for (int i = 0; i<argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return 0;
}

// char [] vs char*

// char [] - making an array of fixed size

// 	char str[] = "Hello";
// 	str[0] = 'h';

// char* - creating pointer to a character

