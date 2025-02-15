#include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int i = 0;
// 	int j;
// 	char **arr;
// 	while (argv[1][i])
// 	{
// 		j = 0;
// 		while (argv[2][j])
// 		{
// 			if(argv[2][j] == argv[1][i])
// 			{
// 				arr[0][i] = argv[2][j];
// 				break;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

void solve(char *str1, char *str2)
{
	int	i;
	int	j;
	int	ascii[128] = {0};

	i = 0;
	while(str2[i])
	{
		if(ascii[str2[i]] == 0)
		{
			ascii[str2[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(str1[i])
	{
		if(ascii[str1[i]] == 1)
		{
			ascii[str1[i]] = 2;
			write(1, &str1[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		solve(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
