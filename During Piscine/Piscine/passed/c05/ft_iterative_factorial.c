#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int result = 1;

	if (nb < 0)
	{
		return 0;
	}

	for (int i = 1; i <= nb; i++)
	{
		result *= i;
	}
	return result;
}

int main(void)
{
	int number = 5;
	int factorial = ft_iterative_factorial(number);
	printf("Factorial of %d is: %d\n", number, factorial);

	return (0);
}
