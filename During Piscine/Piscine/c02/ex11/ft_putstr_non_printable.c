#include <unistd.h>

void ft_putstr_non_printable (char *str){
    int i;
    int j;

    i = 0;
    j = 0;
    char dest [50];
    while (str[i] != '\0'){
        if (!((str[i] >= 32 && str[i] <= 126))){
            char hex_digits[] = "0123456789abcdef";
            char a = hex_digits[str[i]/16];
            char b = hex_digits[str[i] % 16];

            dest [j++] = '\\';
            dest [j++] = a;
            dest [j++] = b;
        }
        else {
            dest[j++] = str[i];
        }
        i++;
    }
    write (1, dest, j);

}

int main(void){
    char str [] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable (str);
}