#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}
int main (void){
    int number;
    ft_ft(&number);
    printf("%d \n",number);
    return 0;
}