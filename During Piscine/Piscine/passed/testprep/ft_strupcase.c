#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char arr[] = "1HrEllo";
	char *ac = ft_strupcase(arr);

	printf("%s\n", ac);

}
