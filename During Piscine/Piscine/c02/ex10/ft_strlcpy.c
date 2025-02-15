#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    int i = 0;
    int src_len = 0;

    while (src[src_len] != '\0') {
        src_len++;
    }

    if (size > 0) {
        while (i < size - 1 && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0'; 
    }

    return (src_len);
}

int main(void) {
    char src[] = "Hello, world!";
    char dest[50];  
    unsigned int size = 10;  

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of src: %u\n", result);  

    return 0;
}
