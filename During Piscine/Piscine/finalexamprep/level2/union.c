#include <unistd.h>

void solve(char *str1, char *str2)
{
	char ascii[128] = {0};
	int i = 0;
	int j = 0;
	while(str1[i] != '\0')
	{
		ascii[str1[i]] = 1;
		i++;
	}
	i = 0;
	while(str2[i] != '\0')
	{
		ascii[str2[i]] = 1;
		i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
		if(ascii[str1[i]] == 1)
		{
			write(1, &str1[i], 1);
			ascii[str1[i]] = 2;
		}
		i++;
	}
	i = 0;
	while(str2[i] != '\0')
	{
		if(ascii[str2[i]] == 1)
		{
			write(1, &str2[i], 1);
			ascii[str2[i]] = 2;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		solve(argv[1], argv[2]);
	}
}
