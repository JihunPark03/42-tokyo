#include <stdio.h>

int ft_str_is_uppercase(char *src){
    unsigned int i;

    i = 0;
    if(*src == '\0'){ 
        return (1);
    }
    while (src[i] != '\0') {
        if (!(src[i] >= 'A' && src[i] <= 'Z')) { 
            return (0);
        }
        i++;
    }
    return (1);
}

int main (void){
    char src[] = "HELLO";
    char src1[] = "123";
    char src2[] = " ";

    int a = ft_str_is_uppercase(src);
    int b = ft_str_is_uppercase(src1);
    int c = ft_str_is_uppercase(src2);

    printf("Source: %d\n", a);
    printf("Source 1: %d\n", b);
    printf("Source 2: %d\n", c);

    return (0);
}