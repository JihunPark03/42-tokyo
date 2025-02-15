#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main (void){
    int a = 42;
    int b = 24;
    printf("%d %d \n", a, b);
    ft_swap(&a,&b);
    printf("%d %d \n", a, b);
    return 0;
}