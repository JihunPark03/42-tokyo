#include <stdlib.h>

int separable(char c, char *sep) {
    int i = 0;
    while (sep[i] != '\0') {
        if (sep[i] == c) {
            return (1);
        }
        i++;
    }
    return (0);
}

int word_count(char *str, char *charset) {
    int i = 0;
    int words = 0;

    while (str[i]) {
        if (!separable(str[i], charset)) {
            words++;
            while (str[i] && !separable(str[i], charset))
                i++;
        } else {
            i++;
        }
    }

    return words;
}

char *one_word(char *str, char *charset) {
    char *word_c;
    int i = 0;

    // Determine the size of the word
    while (str[i] && !separable(str[i], charset)) {
        i++;
    }

    // Allocate memory for the word (+1 for the null terminator)
    word_c = malloc(sizeof(char) * (i + 1)); // Fix memory allocation here
    if (word_c == NULL) {
        return NULL;
    }

    // Copy the word
    i = 0;
    while (str[i] && !separable(str[i], charset)) {
        word_c[i] = str[i];
        i++;
    }
    word_c[i] = '\0';

    return word_c;
}

char **ft_split(char *str, char *charset) {
    int i = 0; // Initialize i
    int j = 0; // Initialize j
    char **result;
    int wordcount;

    wordcount = word_count(str, charset); // Count words
    result = malloc(sizeof(char *) * (wordcount + 1)); // +1 for the NULL-terminator

    if (result == NULL || str == NULL || charset == NULL) {
        return NULL;
    }

    // Split the string into words
    while (str[i]) {
        if (!separable(str[i], charset)) {
            result[j] = one_word(&str[i], charset); // Extract one word
            if (result[j] == NULL) { // Handle memory allocation failure
                return NULL;
            }
            while (str[i] && !separable(str[i], charset))
                i++;
            j++;
        } else {
            i++;
        }
    }

    result[j] = NULL; // Null-terminate the result array
    return result;
}

#include <stdio.h>

int main(void) {
    char str[] = "   hello.world/have*a@nice day";
    char charset[] = "./*@ ";
    char **result; // Array of strings
    int i = 0;

    result = ft_split(str, charset);

    if (result != NULL) { // Check if memory allocation was successful
        while (result[i] != NULL) {
            printf("%s\n", result[i]);
            free(result[i]); // Free each individual string
            i++;
        }
        free(result); // Free the array of strings
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
