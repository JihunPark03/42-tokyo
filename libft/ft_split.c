/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:02:09 by jihpark           #+#    #+#             */
/*   Updated: 2024/11/03 13:22:05 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	word_count(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*oneword(const char *str, char c)
{
	int		i;
	char	*oneword;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	oneword = malloc(sizeof(char) * (i + 1));
	if (oneword == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && str[i] != c)
	{
		oneword[i] = str[i];
		i++;
	}
	oneword[i] = '\0';
	return (oneword);
}

static void	free_memory(char **result, int count)
{
	int	j;

	j = 0;
	while (j < count)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

static char	**put_str(const char *str, char **result, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			result[j] = oneword(&str[i], c);
			if (result[j] == NULL)
			{
				free_memory(result, j);
				return (NULL);
			}
			while (str[i] && str[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		wordcount;

	if (str == NULL)
	{
		return (NULL);
	}
	wordcount = word_count(str, c);
	result = malloc(sizeof(char *) * (wordcount + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	result = put_str(str, result, c);
	return (result);
}

//#include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "chinimala ";
// 	char	chr;
// 	char	**result;
// 	int		i;

// 	chr = ' ';
// 	i = 0;
// 	result = ft_split(str, chr);
// 	if (result != NULL)
// 	{
// 		while (result[i] != NULL)
// 		{
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
