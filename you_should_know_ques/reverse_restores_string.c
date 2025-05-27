#include <stdio.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    char *start = str;  // Pointer to the beginning of the string
    char *end = str;    // Pointer to the end of the string
    char temp;

    // Move 'end' pointer to the last character (excluding '\0')
    while (*end != '\0') {
        end++;
    }
    end--; // Move back to the last valid character

    // Swap characters from start to end
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;  // Move start pointer forward
        end--;    // Move end pointer backward
    }
}

int main() {
    char str[200];

    // Read input string
    printf("Enter a string: ");
    scanf(" %s", str); // Read input including spaces

    // Display original string
    printf("Original string: %s\n", str);

    // Reverse the string using pointer function
    reverseString(str);

    // Display reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
