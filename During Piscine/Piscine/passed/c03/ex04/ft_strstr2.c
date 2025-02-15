#include <stdio.h>

char	*ft_strstr1(char *str, char *to_find)
{
	int i;
	int count;
	char *temp_to_find = to_find;

	count = 0;
	while (*temp_to_find++ != '\0')
	{
		count++;
	}
	if (count == 0)
	{
		return str;
	}
	while (*str++ != '\0')
	{
		if(*str == to_find[0])
		{
			i = 0;
			while (str[i] == to_find[i] && to_find[i] != '\0')
			// str pointer does not start from the position to_find[0] is first found
			{
				i++;
			}
			if (count == i)
			{
				return (&*str);
			}
		}
	}
	return (0);
}

char	*ft_strstr2(char *str, char *to_find)
{
	int i;
	int j;
	int count;
	char *temp_to_find = to_find;

	count = 0;
	j = 0;
	while (*temp_to_find++ != '\0')
	{
		count++;
	}
	if (count == 0)
	{
		return str;
	}
	while (str[j] != '\0')
	{
		if(str[j] == to_find[0])
		{
			i = 0;
			while (str[j + i] == to_find[i] && to_find[i] != '\0')
			// str pointer location is not changed
			{
				i++;
			}
			if (count == i)
			{
				return (&str[j]);
			}
		}
		j++;
	}
	return (0);
}



int main(void)
{
    char	str [] = "1234678234590";
    char	to_find [] = "2345";

    char *final1 = ft_strstr1(str, to_find);
	char *final2 = ft_strstr2(str, to_find);

    printf("%s\n", final1);
	printf("%s\n", final2);

    return (0);
}
