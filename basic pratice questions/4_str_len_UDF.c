#include <stdio.h>

// User-defined function to calculate string length
int findLength(char *str) { 
    int length = 0;
    
    // Loop until null character ('\0') is found

    // 1 way
    // while (*str++ != '\0') { //
    //      length++;
    // }

    // 2 way
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    scanf("%s", str); 

    int length = findLength(str);

    printf("Length of the string: %d\n", length);
    
    return 0;
}
