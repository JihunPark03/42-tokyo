#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';

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
