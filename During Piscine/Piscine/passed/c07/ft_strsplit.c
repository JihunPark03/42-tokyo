
#include <stdio.h>
#include <stdlib.h>

int	separable(char c, char *sep)
{
	int	i;

	i = 0;
	while(sep[i] != '\0')
	{
		if (sep[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;

	while (str[i])
	{
		if (!separable(str[i], charset))
		{
			words++;
			while (str[i] && !separable(str[i], charset))
				i++;
		}
		else
			i++;
	}

	return (words);
}

char *one_word(char *str, char *charset)
{
	char	*word_c;
	int		i;
	
	i = 0;
	while(str[i] && !separable(str[i], charset))//one word size
	{
		i++;
	}
	word_c = malloc(sizeof(char *) * (i + 1));
	if (word_c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && !separable(str[i], charset))//copy to word_c array
	{
		word_c[i] = str[i];
		i++;
	}
	word_c[i] = '\0';

	return (word_c);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**result; //returning result
	int	wordcount;

	wordcount = word_count(str, charset);
	result = malloc(sizeof(char*) * (wordcount + 1));

	if(result == NULL || str == NULL || charset == NULL)
	{
		retrun (NULL);
	}

	while (str[i])
	{
		if (!separable(str[i], charset))
		{
			result[j] = word_splitter(&str[i], charset);

			while (str[i] && !separable(str[i], charset))
				i++;
			
			j++;
		}

		else
			i++;
	}

	result[j] = 0;
	return (result);
}

int	main(void)
{
	char	str[] = "hello.world/have*a@nice day";
	char	charset[] = "./*@ ";
	char	**result;//take array of string
	int		i;

	i = 0;
	result = ft_split(str, charset);
	while (result[i] != '\0')
	{
		printf("%s\n",result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}
