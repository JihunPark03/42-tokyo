/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:54:28 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/24 18:34:23 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_count(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (count + 1);
}

int	separable(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*oneword(char *str, char *charset)
{
	int		i;
	char	*oneword;

	i = 0;
	while (str[i] != '\0' && !separable(str[i], charset))
	{
		i++;
	}
	oneword = malloc(sizeof(char) * (i + 1));
	if (oneword == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && !separable(str[i], charset))
	{
		oneword[i] = str[i];
		i++;
	}
	oneword[i] = '\0';
	return (oneword);
}

char	**put_str(char *str, char **result, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!separable(str[i], charset))
		{
			result[j] = oneword(&str[i], charset);
			while (str[i] && !separable(str[i], charset))
			{
				i++;
			}
			j++;
		}
		else
		{
			i++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		wordcount;
	int		i;
	int		j;

	i = 0;
	j = 0;
	wordcount = word_count(str, charset);
	result = malloc(sizeof(char *) * (wordcount + 1));
	if (result == NULL || str == NULL || charset == NULL)
	{
		return (NULL);
	}
	result = put_str(str, result, charset);
	return (result);
}

// #include <stdio.h>

// int main(void) {
// 	char str[] = "hello.world/have*a@nice day";
// 	char charset[] = "./*@ ";
// 	char **result;
// 	int i = 0;

// 	result = ft_split(str, charset);

// 	if (result != NULL)
// 	{
// 		while (result[i] != NULL) {
// 			printf("%s\n", result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}

// 	return (0);
// }
