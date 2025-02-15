#include <stdio.h>

int ft_str_is_alpha(char *src){
    unsigned int i;

    i = 0;
    if(*src == '\0'){ //if null, return 1
        return (1);
    }
    while (src[i] != '\0') {
        if (!((src[i] >= 'A' && src[i] <= 'Z') || (src[i] >= 'a' && src[i] <= 'z'))) { //if neither A~Z nor a~z, return 0
            return (0);
        }
        i++;
    }
    return (1);
}

int main (void){
    char src[] = "Hello";
    char src1[] = "123";
    char src2[] = " ";

    int a = ft_str_is_alpha(src);
    int b = ft_str_is_alpha(src1);
    int c = ft_str_is_alpha(src2);

    printf("Source: %d\n", a);
    printf("Source 1: %d\n", b);
    printf("Source 2: %d\n", c);

    return (0);
}