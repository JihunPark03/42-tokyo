#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main (void){
    int a = 8;
    int b = 4;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div: %d\n", div);
    printf("div: %d", mod);
    
    return 0;
}