#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *str;
	int len = str_len(src);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	char *temp = str;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (str);
}

int main(void)
{
	char *str = "Hello";
	char *copy = ft_strdup(str);
	printf("%s\n", copy);
	free(copy);
}
