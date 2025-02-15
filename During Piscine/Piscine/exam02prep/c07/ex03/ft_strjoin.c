/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:57:26 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 00:20:11 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		i;
	int		len;
	char	*total;

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

	total = malloc(sizeof(char) * (len + 1));
	if (total == NULL)
	{
		return (NULL);
	}
	return (total);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*final;

	if (size == 0)
	{
		final = malloc(1); // Return an empty string if size is 0
		if (final == NULL)
			return (NULL);
		final[0] = '\0'; // Empty string
		return (final);
	}

	final = total_length(size, strs, sep); // Allocate memory for final string
	if (final == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j]) // Copy each character of strs[i] into final
			final[k++] = strs[i][j++];

		if (i < size - 1) // Add separator between strings, but not after the last string
		{
			j = 0;
			while (sep[j])
				final[k++] = sep[j++];
		}
		i++;
	}

	final[k] = '\0'; //[a.out, b,out]
	return (final);
}

#include <stdio.h>

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
