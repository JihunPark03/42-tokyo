#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
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