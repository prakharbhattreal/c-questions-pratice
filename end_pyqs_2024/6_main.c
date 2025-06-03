#include <stdio.h>
#include <string.h>

/*
    Write a C program that extracts the tokens from the string. Given a string as input, the program should print on the screen each token on a hew line. For example, given the following string as 
    Input: "Hello how are you friends."
    the program should generate:
    Hello
    how
    are
    You
    friends
*/

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Extract tokens using space as delimiter
    char *token = strtok(str, " ");
    
    // Print each token on a new line
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
