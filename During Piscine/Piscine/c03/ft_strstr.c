/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihunpark <jihunpark@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:36:30 by jihunpark         #+#    #+#             */
/*   Updated: 2024/09/11 11:40:38 by jihunpark        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count1(char *arr)
{
	int	count;

	count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}

	return (count);
}


int count2(char *arr1, char *arr2, int i)
{
	int	count;

	count = 0;
	// while (arr1[i + count] != arr2[count])
	// {
	// 	count++;
	// }

	// return (count);
	while (arr2[count] != '\0')
	{
		if (arr1[i + count] != arr2[count])
		{
			return 0;
		}
		count++;
	}
	return (count);
}


char	*ft_strstr(char *str, char *to_find)
{
	int	strcount;
	int	to_findcount;

	strcount = count1(str);
	to_findcount = count1(to_find);
	if (strcount >= to_findcount)
	{
		int	i;
		int number;
		
		i = 0;
		number = 0;
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				number = count2(str, to_find, i);
				if (number == to_findcount)
				{
					return &str[i];
				}
			}

		i++;
		}
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char	str [] = "1234567890";
//     char	to_find [] = "23145";

//     char *final = ft_strstr(str, to_find);

//     printf("%s\n", final);

//     return (0);
// }
