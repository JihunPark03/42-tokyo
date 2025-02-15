#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int j = 0;
	int temp = 0;
	while (j < size)
	{
		int i = 0;
		while (i < size - j - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}

}

int main(void){
	int arr[] = {3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);  
	ft_sort_int_tab(arr , size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
