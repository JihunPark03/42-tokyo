int main(void)
{
	
}

char	*ft_strcpy(char *dest, char *src) // 받을 땐 array로
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main (void){
    char src[] = "Hello, world!";
    char dest[50];
	char *cpy = ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
	printf("Copy: %s\n", cpy);

    return (0);
}
