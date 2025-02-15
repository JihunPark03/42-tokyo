#include <stdio.h>

char *ft_strcapitalize(char *str){
    int i;

    i = 0;
    while (str[i] != '\0'){

        if (str[i] >= 'A' && str[i] <= 'Z')
            str [i] -= 'A' - 'a';
        if ((str[i] >= 'a' && str[i] <= 'z')
        &&!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
        || (str[i - 1] >= 'a' && str[i - 1] <= 'z')
        || (str[i - 1] >= '0' && str[i - 1] <= '9'))
        ||(i == 0))
            if (str[i] != '\0'){
                str [i] += 'A' - 'a'; 
            }
        i++;
    }
    return (str);
}

int main (void){
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);
    
    printf("Uppercase: %s\n", str);

    return (0);
}