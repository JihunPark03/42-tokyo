#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
    int temp;
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main (void){
    int a = 8;
    int b = 4;
    ft_ultimate_div_mod(&a, &b);
    printf("div: %d\n", a);
    printf("rem: %d", b);
    
    return 0;
}