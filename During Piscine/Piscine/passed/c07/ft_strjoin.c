#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*total_length(int size, char **strs, char *sep)//outputs array
//[ [[a],[.],[o],[u],[t]], [[b],[.],[o],[u],[t]] ] <-- [string1, string2]
{
	int	i;
	int 	len;
	char 	*total;

	i = 0;
	len = 0;
	if(size <= 0)
	{
		len = 1;
	}
	else
	{
		len += ft_strlen(sep) * size - 1;
		while (i < size)
		{
			len += ft_strlen(strs[i]);//string1 length + string2 length ...
			i++;
		}
	}

	total = malloc(sizeof(char) * len);
	if (total == NULL)
	{
		return (0);
	}
	return (total);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*final;

	i = 0;
	k = 0;
	final = total_length(size, strs, sep); //takes array in 1D array

	while (i < size)
	{
		j = 0;
		while (strs[i][j]) //[ [[a],[.],[o],[u],[t]], [[b],[.],[o],[u],[t]] ]
		{
			final[k++] = strs[i][j++];
		}

		j = 0;		
		while (sep[j] && i != size - 1)
		{
			final[k++] = sep[j++];
		}
		i++;
	}

	final[k] = '\0'; //[a.out, b,out]
	return (final);
}

int main(void)
{
	char	*array[] = {"hello", "world"};//[ [h],[e],[l],[l],[o]]  [w],[o],[r],[l],[d] ]
	char	sep[] = "-æ-";
	int		i = 0;
	int		size = 2;
	char	*all = ft_strjoin(size, array, sep);
	
	printf("%s\n", all);
	free(all);
}
