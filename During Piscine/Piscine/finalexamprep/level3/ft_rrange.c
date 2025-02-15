#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 r[len] = (end >= start) ? start++ : start--;
	return (r);
}
#include <stdio.h>

int main(void)
{
	int *arr;
	arr = ft_rrange(1, 3);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}
