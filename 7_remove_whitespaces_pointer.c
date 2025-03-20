#include <stdio.h>

// Function to remove spaces from a string using pointers

// 2 way [let us C] most Preferable for pratical and exams
void removeSpaces2(char *str) {
    int i, count =0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[count] = str[i];
            count++; 
        }
    }
    str[count] = '\0';
    
}

// 1 way CHATGPT 
void removeSpaces(char *str) {
    char *source = str, *destination = str;

    while (*source != '\0') {
        if (*source != ' ') {  // If it's not a space, copy it
            *destination = *source;
            destination++;
        }
        source++; // Move to next character
    }
  
    *destination = '\0'; // Null-terminate the modified string
}

int main() {
    char str[100] = "  ABC   D EF  ";

    // Calling UDF to remove spaces
    printf("String with spaces: %s\n", str);

    // removeSpaces(str);
    removeSpaces2(str);

    printf("String without spaces: %s\n", str);

    return 0;
}
