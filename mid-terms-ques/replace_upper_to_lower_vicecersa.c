#include <stdio.h>

// Function to toggle case of a string
void toggleCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;  // Convert uppercase to lowercase
        } else if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;  // Convert lowercase to uppercase
        }
        str++; // Move to the next character
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Call function to toggle case
    toggleCase(str);

    // Print modified string
    printf("Toggled case string: %s", str);

    return 0;
}
