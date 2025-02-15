#include <stdlib.h>
#include <stdio.h>

static int	ft_num_len(int nb)
{
	int	len = 0;

	if (nb == 0)
		return 1;
	if (nb < 0)
		len++;  // Account for the minus sign
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int nb)
{
	int		len = ft_num_len(nb);
	char	*str = malloc(sizeof(char) * (len + 1));  // Allocate space for the string + null terminator
	if (!str)
		return NULL;

	str[len] = '\0';  // Null-terminate the string

	if (nb == -2147483648)
	{
		str = "-2147483648";
		return str;
	}

	if (nb == 0)
	{
		str[0] = '0';
		return str;
	}

	int is_neg = (nb < 0);
	if (is_neg)
		nb = -nb;  // Make nb positive for easier processing

	while (nb)
	{
		str[--len] = (nb % 10) + '0';  // Convert last digit to character and store in str
		nb /= 10;  // Remove the last digit
	}

	if (is_neg)
		str[0] = '-';  // Add the negative sign at the beginning

	return str;
}

int	main(void)
{
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	for (int i = 0; i < 5; i++)
	{
		char *str = ft_itoa(tab[i]);
		printf("%s\n", str);
		free(str);  // Free the allocated string after use
	}

	return 0;
}
