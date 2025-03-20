#include <stdio.h>

// User-defined function to concatenate two strings using pointers
void concatStrings(char *destination, char *source) {
    // Move the pointer to the end of destination string
    while (*destination != '\0') {
        destination++;
    }

    // Copy characters from source to destination
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    } 

    // Null-terminate the concatenated string
    *destination = '\0';
}

int main() {
    char str1[100], str2[100];

    // Taking input from user
    printf("Enter first string: ");
    scanf("%s", str1);  // Note: This will not take spaces

    printf("Enter second string: ");
    scanf("%s", str2);  // This will also stop at spaces

    // Calling UDF to concatenate strings
    concatStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
