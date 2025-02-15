#include <unistd.h> 

void ft_putstr(char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

int main(void) {
    char message[] = "Hello, World!";
    
    ft_putstr(message);  
    write(1, "\n", 1);  

    return 0;
}