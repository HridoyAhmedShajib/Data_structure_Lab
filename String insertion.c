#include <stdio.h>
#include <string.h>

void string_insertion(char* text, char* pattern, char* insert, char* result) {
    int i, j, k;

    // find the position to insert the string
    for (i = 0; i < strlen(text) - strlen(pattern) + 1; i++) {
        for (j = 0; j < strlen(pattern); j++) {
            if (text[i+j] != pattern[j])
                break;
        }
        if (j == strlen(pattern))
            break;
    }

    // copy the first part of the text into the result
    for (k = 0; k < i; k++) {
        result[k] = text[k];
    }

    // insert the insert string into the result
    for (j = 0; j < strlen(insert); j++) {
        result[k++] = insert[j];
    }

    // copy the rest of the text into the result
    for (j = i; j < strlen(text); j++) {
        result[k++] = text[j];
    }
    result[k] = '\0';
}

int main() {
    char text[] = "ABCDEFGH";
    char pattern[] = "CD";
    char insert[] = "pqrst";
    char result[100];

    // call the string insertion function
    string_insertion(text, pattern, insert, result);

    printf("Text: %s\n", text);
    printf("Pattern: %s\n", pattern);
    printf("Insert: %s\n", insert);
    printf("Result: %s\n", result);

    return 0;
}
