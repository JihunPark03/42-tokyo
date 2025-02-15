#include <stdio.h>

char *ft_strlowcase(char *str){
    int i;

    i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str [i] -= 'A' - 'a';
        i++;
    }
    return (str);
}

int main (void){
    char str[] = "FSDFfaefaef";

    ft_strlowcase(str);
    
    printf("Uppercase: %s\n", str);

    return (0);
}