#include <stdio.h>
#include <string.h> // Include string.h for strlen()

int main() { 
    char str[] = "Hello, C!";
    
    // Using built-in strlen() function
    int length = strlen(str);

    printf("Length of string: %d\n", length);
    
    return 0;
}
