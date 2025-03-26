#include <stdio.h>

int main() {
    char str[200];
    char *ptr; // Pointer to traverse the string 
    int vowels = 0, consonants = 0;

    // Read input string
    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str; // Assign pointer to the string

    // Traverse the string using pointer
    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) { // Check if it's a letter
            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
                *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
        ptr++; // Move pointer to the next character
    }

    // Display results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
