#include <stdio.h>

// void ft_strcpy(char *dest, char *src)
// {
//     int i;

//     i = 0;
//     while (src[i] != '\0'){
//         dest[i] = src [i];
//         i++;
//     }
// }

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    return (dest);
}

int main (void){
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);

    printf("Hi\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return (0);
}