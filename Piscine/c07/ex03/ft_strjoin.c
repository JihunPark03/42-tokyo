/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihpark <jihpark@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:57:26 by jihpark           #+#    #+#             */
/*   Updated: 2024/09/22 09:21:39 by jihpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (size > 0)
	{
		len += ft_strlen(sep) * (size - 1);
	}
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

void	copy_str(char *dest, char *src, int *k)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[(*k)++] = src[j++];
	}
}

char	*initialize_final(int size, char **strs, char *sep)
{
	char	*final;
	int		len;

	if (size == 0)
	{
		final = malloc(1);
		if (!final)
			return (NULL);
		final[0] = '\0';
		return (final);
	}
	len = total_length(size, strs, sep);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		i;
	int		k;

	i = 0;
	k = 0;
	final = initialize_final(size, strs, sep);
	if (!final)
		return (NULL);
	while (i < size)
	{
		copy_str(final, strs[i], &k);
		if (i < size - 1)
			copy_str(final, sep, &k);
		i++;
	}
	final[k] = '\0';
	return (final);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*array[] = {"hello", "world"};
// 	char	sep[] = "-æ-";
// 	int		i = 0;
// 	int		size = 2;
// 	char	*all = ft_strjoin(size, array, sep);
// 	printf("%s\n", all);
// 	free(all);
// }
