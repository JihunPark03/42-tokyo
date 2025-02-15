#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    int i, temp;
    for (i=0; i<size/2; i++){
        temp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = temp;
    }

}

int main(void){
    int arr[] = {1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);  
    ft_rev_int_tab(arr , size);
        for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}