#include <stdio.h>

// 1 way using pointer [let us C]
void toUpperCase(char *str) {
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i] - 32;   // according to ASCII values
        }
        i++;
    }
    
}
// 2 way using pointer [CHATGPT]
void toUpperCase2(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {  // Check if it's a lowercase letter
            *str = *str - 32;  // Convert to uppercase (ASCII difference)
        }
        str++;  // Move to next character
    }
}

int main() {
    char str[] = "Graphic Era Hill University";

    toUpperCase(str);
    // toUpperCase2(str);

    printf("Uppercase String: %s\n", str);

    return 0;
}
