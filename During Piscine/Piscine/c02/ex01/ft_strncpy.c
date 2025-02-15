#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;

    i = 0;
    while (i <= n && src[i] != '\0'){
        dest [i] = src[i];
        i++;
    }
    return (dest);
}

int main (void){
    char src[] = "Hello, world!";
    char dest[50];
    int n = 5;
X
    ft_strncpy(dest, src, n);//change the contents from the address

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return (0);
}