#include <stdio.h>

// Recursive function to remove spaces
void removeSpaces(char *str, char *destination) {
    if (*str == '\0') {  // Base case: End of string
        *destination = '\0';
        return;
    }
  
    if (*str != ' ') {  // If not a space, copy it
        *destination = *str;
        removeSpaces(str + 1, destination + 1);  // Move both pointers forward
    } else {
        removeSpaces(str + 1, destination);  // Skip space, move only source pointer
    }
}

int main() {
    char str[100] = "  ABC   D EF  ", result[100];

    // Calling UDF to remove spaces
    printf("String with spaces: %s\n", str);

    // Call recursive function
    removeSpaces(str, result);

    printf("String without spaces: %s\n", result);

    return 0;
}
