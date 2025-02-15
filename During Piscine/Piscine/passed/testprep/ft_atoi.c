int	condition(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (condition(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * sign);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	nb = ft_atoi("            ---+--+1234ab567");
	printf("%d\n", nb);
	return (0);
}
