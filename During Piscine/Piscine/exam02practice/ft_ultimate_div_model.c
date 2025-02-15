#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = temp / *b; 
	*b = temp % *b;

}

int	main(void)
{
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\n", a);
	printf("mod: %d", b);
}
