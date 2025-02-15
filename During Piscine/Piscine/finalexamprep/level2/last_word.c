#include <unistd.h>

int ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
	{
		return (1);
	}
	return (0);
}

void solve(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	i--;
	while(str[i] && ft_isblank(str[i]))
	{
		i--;
	}
	while(str[i] && !ft_isblank(str[i]))
	{
		i--;
	}
	i++;
	while(str[i] && !ft_isblank(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		solve(argv[1]);
	}
	write(1, "\n", 1);
}
