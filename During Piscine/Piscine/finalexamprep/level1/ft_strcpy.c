#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';

	return (s2);
}


int main(void)
{
	char *str = "Hello World";
	char str2[50];

	ft_strcpy(str, str2);
	printf("%s\n", str2);

	return (0);
}
