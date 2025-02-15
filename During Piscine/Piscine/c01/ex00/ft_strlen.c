#include <stdio.h>

int ft_strlen(char *str){
    int count = 0;
    while (*str){
        str++;
        count++;
    }
    return count;
}

int main(void){
    char string [] = "Hello World!";
    int count = ft_strlen(string);
    printf("%d\n", count);
}
