/*
    Question:
    Design a C program that reads a string from the standard input device separated by spaces.
    Call a User Defined Function (UDF) that returns the reversed string to the calling program.
    In the calling program, check if it's a palindrome or not.
    Display the reversed string and the result (palindrome or not) to the screen.
*/

#include <stdio.h>
#include <string.h>

// UDF to reverse a string
void reverseString(const char *src, char *dest) {
    int len = strlen(src);
    for (int i = 0; i < len; i++) {
        dest[i] = src[len - 1 - i];
    }
    dest[len] = '\0';  // Null-terminate the reversed string
}

int main() {
    char str[100], reversed[100];

    printf("Enter a string: ");
    gets(str);

    // Call UDF to reverse the string
    reverseString(str, reversed);

    // Display reversed string
    printf("Reversed String: %s\n", reversed);

    // Check if palindrome (as-is)
    if (strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
