
char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1 [i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

#include <stdio.h>

int main(void)
{
	char src[] = "Hello";
	char dest[50];

	ft_strcpy(src, dest);
	printf("%s\n", dest);
}
