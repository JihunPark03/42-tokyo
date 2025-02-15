#include <unistd.h>
#include <stdio.h>

int		main(int c, char **v)
{
	if (c > 1)
	{
		while (*v[1]) //*arr = arr[i]
		{
			write(1, v[1], 1);
			v[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// int		main(int ac, char **av)
// {
// 	int i;

// 	i = 0;
// 	if (ac > 1)
// 	{
// 		while (av[1][i] != '\0')
// 		{
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
