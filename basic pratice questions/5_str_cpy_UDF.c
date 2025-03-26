#include <stdio.h>
 
// User-defined function to copy a string
void copyString(char *destination, char *source) {
    int i = 0;
    
    // Copy each character from source to destination till its end
    while (*source != '\0') { // Loop until null character
        *destination = *source; // Copy character
        source++;   // Move to next character
        destination++;
    }
    *destination = '\0';   // Null-terminate destination string
}

int main() {
    char source[100], destination[100];

    // Taking input from user
    printf("Enter the source string: ");
    scanf("%s", source);  // Note: This will not take spaces

    // Calling UDF to copy string
    copyString(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
