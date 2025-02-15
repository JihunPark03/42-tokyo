#include <stdio.h>

int ignore(char c)
{
	return((c >= 9 && c <=13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	while (ignore(*str))
	{
		str++;
	}
	while(*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int main(void)
{
	char *string = "   +-+--1234fa";
	int result = ft_atoi(string);
	printf("%d\n", result);
}
